#include "fast.hpp"

void detectFeaturesFAST(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::Ptr<cv::FastFeatureDetector> fast = cv::FastFeatureDetector::create();
    fast->detect(gray, keypoints);
}