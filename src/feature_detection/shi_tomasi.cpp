#include "shi_tomasi.hpp"

void detectFeaturesShiTomasi(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    std::vector<cv::Point2f> corners;
    double qualityLevel = 0.01;
    double minDistance = 10;
    int blockSize = 3;
    bool useHarrisDetector = false;
    double k = 0.04;

    cv::goodFeaturesToTrack(gray, corners, 100, qualityLevel, minDistance, cv::Mat(), blockSize, useHarrisDetector, k);

    for (const auto& corner : corners) {
        keypoints.push_back(cv::KeyPoint(corner, 1));
    }
}