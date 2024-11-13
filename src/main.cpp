#include <opencv2/opencv.hpp>
#include <iostream>
#include "feature_detection/orb.hpp"
#include "feature_detection/fast.hpp"
#include "feature_detection/surf.hpp"
#include "feature_detection/sift.hpp"

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
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <image_name>" << endl;
        return -1;
    }

    string base_path = "/home/biren/feature-test/data/images/";
    string image_name = argv[1];
    string full_path = base_path + image_name;

    Mat img = imread(full_path);
    if (img.empty()) {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }

    vector<KeyPoint> keypoints;
    Mat descriptors;

    //feature detection

    //detectFeaturesSURF(img, keypoints, descriptors);

    //detectFeaturesORB(img, keypoints, descriptors);

    detectFeaturesFAST(img, keypoints);

    //detectFeaturesSIFT(img, keypoints, descriptors);

    cout << "Number of features detected: " << keypoints.size() << endl;

    Mat img_keypoints;
    drawKeypoints(img, keypoints, img_keypoints, Scalar(0, 0, 255), DrawMatchesFlags::DEFAULT);

    // Add the number of features detected to the image
    string text = "Features detected: " + to_string(keypoints.size());
    int fontFace = FONT_HERSHEY_SIMPLEX;
    double fontScale = 1;
    int thickness = 2;
    Point textOrg(10, 50);
    putText(img_keypoints, text, textOrg, fontFace, fontScale, Scalar::all(-1), thickness);

    // Save result
    saveImageWithPrefix(img_keypoints, "fast", image_name);

    // Display the results
    namedWindow("Keypoints", WINDOW_NORMAL);
    imshow("Keypoints", img_keypoints);
    waitKey(0);

    return 0;
}