#include <opencv2/opencv.hpp>
#include <iostream>
#include "feature_detection/orb.hpp"
#include "feature_detection/fast.hpp"
#include "feature_detection/surf.hpp"
#include "feature_detection/sift.hpp"
#include "feature_detection/harris.hpp"
#include "feature_detection/shi_tomasi.hpp"
#include "feature_detection/canny.hpp"
#include "feature_detection/brisk.hpp"
#include "feature_detection/brief.hpp"
#include "feature_detection/mser.hpp"
#include "feature_detection/kaze.hpp"
#include "feature_detection/akaze.hpp"
#include "feature_detection/hog.hpp"
#include "feature_detection/gabor.hpp"

using namespace cv;
using namespace std;

void processFrame(const Mat& frame, const string& feature_detector, vector<KeyPoint>& keypoints, Mat& descriptors) {
    if (feature_detector == "ORB") {
        detectFeaturesORB(frame, keypoints, descriptors);
    } else if (feature_detector == "FAST") {
        detectFeaturesFAST(frame, keypoints);
    } else if (feature_detector == "SURF") {
        detectFeaturesSURF(frame, keypoints, descriptors);
    } else if (feature_detector == "SIFT") {
        detectFeaturesSIFT(frame, keypoints, descriptors);
    } else if (feature_detector == "HARRIS") {
        detectFeaturesHarris(frame, keypoints);
    } else if (feature_detector == "SHI_TOMASI") {
        detectFeaturesShiTomasi(frame, keypoints);
    } else if (feature_detector == "CANNY") {
        detectFeaturesCanny(frame, keypoints);
    } else if (feature_detector == "BRISK") {
        detectFeaturesBRISK(frame, keypoints, descriptors);
    } else if (feature_detector == "BRIEF") {
        detectFeaturesBRIEF(frame, keypoints, descriptors);
    } else if (feature_detector == "MSER") {
        detectFeaturesMSER(frame, keypoints);
    } else if (feature_detector == "KAZE") {
        detectFeaturesKAZE(frame, keypoints, descriptors);
    } else if (feature_detector == "AKAZE") {
        detectFeaturesAKAZE(frame, keypoints, descriptors);
    } else if (feature_detector == "HOG") {
        detectFeaturesHOG(frame, keypoints);
    } else if (feature_detector == "GABOR") {
        detectFeaturesGabor(frame, keypoints);
    } else {
        cout << "Unknown feature detector: " << feature_detector << endl;
    }
}

int main(int argc, char** argv) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <feature_detector> <video_name>" << endl;
        cout << "Available feature detectors: ORB, FAST, SURF, SIFT, HARRIS, SHI_TOMASI, CANNY, BRISK, BRIEF, MSER, KAZE, AKAZE, HOG, GABOR" << endl;
        return -1;
    }

    string feature_detector = argv[1];
    string base_path = "/home/biren/feature-test/data/videos/";
    string video_name = argv[2];
    string full_path = base_path + video_name;

    VideoCapture cap(full_path);
    if (!cap.isOpened()) {
        cout << "Could not open or find the video!" << endl;
        return -1;
    }

    cap.set(CAP_PROP_POS_FRAMES, 20 * 30);

    Mat frame;
    while (cap.read(frame)) {
        vector<KeyPoint> keypoints;
        Mat descriptors;

        processFrame(frame, feature_detector, keypoints, descriptors);

        cout << "Number of features detected: " << keypoints.size() << endl;

        Mat frame_keypoints;
        drawKeypoints(frame, keypoints, frame_keypoints, Scalar(0, 0, 255), DrawMatchesFlags::DEFAULT);

        // Display the results
        namedWindow("Keypoints", WINDOW_NORMAL);
        imshow("Keypoints", frame_keypoints);

        if (waitKey(30) >= 0) break; // Exit if any key is pressed
    }

    cap.release();
    destroyAllWindows();

    return 0;
}