#include "brisk.hpp"

void detectFeaturesBRISK(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::Ptr<cv::BRISK> brisk = cv::BRISK::create();
    brisk->detectAndCompute(gray, cv::noArray(), keypoints, descriptors);
}