#include <opencv2/opencv.hpp>
#include <iostream>
#include "feature_detection/orb.hpp"
#include "feature_detection/fast.hpp"
#include "feature_detection/surf.hpp"
#include "feature_detection/sift.hpp"
#include "feature_detection/harris.hpp"
#include "feature_detection/shi_tomasi.hpp"

using namespace cv;
using namespace std;

void saveImageWithPrefix(const Mat& img, const string& prefix, const string& originalName) {
    string outputPath = "/home/biren/feature-test/output/" + prefix + "_" + originalName;
    bool isSuccess = imwrite(outputPath, img);
    if (isSuccess) {
        cout << "Image saved successfully: " << outputPath << endl;
    } else {
        cout << "Error: Could not save the image: " << outputPath << endl;
    }
}

int main(int argc, char** argv) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <feature_detector> <image_name>" << endl;
        cout << "Available feature detectors: ORB, FAST, SURF, SIFT, HARRIS, SHI_TOMASI" << endl;
        return -1;
    }

    string feature_detector = argv[1];
    string base_path = "/home/biren/feature-test/data/images/";
    string image_name = argv[2];
    string full_path = base_path + image_name;

    Mat img = imread(full_path);
    if (img.empty()) {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }

    vector<KeyPoint> keypoints;
    Mat descriptors;

    if (feature_detector == "ORB") {
        detectFeaturesORB(img, keypoints, descriptors);
    } else if (feature_detector == "FAST") {
        detectFeaturesFAST(img, keypoints);
    } else if (feature_detector == "SURF") {
        detectFeaturesSURF(img, keypoints, descriptors);
    } else if (feature_detector == "SIFT") {
        detectFeaturesSIFT(img, keypoints, descriptors);
    } else if (feature_detector == "HARRIS") {
        detectFeaturesHarris(img, keypoints);
    } else if (feature_detector == "SHI_TOMASI") {
        detectFeaturesShiTomasi(img, keypoints);
    } else {
        cout << "Unknown feature detector: " << feature_detector << endl;
        return -1;
    }

    cout << "Number of features detected: " << keypoints.size() << endl;

    Mat img_keypoints;
    drawKeypoints(img, keypoints, img_keypoints, Scalar(0, 0, 255), DrawMatchesFlags::DEFAULT);

    // Add the number of features detected to the image
    string text = "Features detected: " + to_string(keypoints.size());
    int fontFace = FONT_HERSHEY_SIMPLEX;
    double fontScale = 1;
    int thickness = 2;
    Point textOrg(10, 50);
    putText(img_keypoints, text, textOrg, fontFace, fontScale, Scalar(0, 255, 0), thickness);

    // Save result
    saveImageWithPrefix(img_keypoints, feature_detector, image_name);

    // Display the results
    namedWindow("Keypoints", WINDOW_NORMAL);
    imshow("Keypoints", img_keypoints);
    waitKey(0);

    return 0;
}