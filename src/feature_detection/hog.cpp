#include "hog.hpp"

void detectFeaturesHOG(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::HOGDescriptor hog;
    std::vector<cv::Point> locations;

    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    hog.detect(gray, locations); // Remove the descriptors argument

    // Convert locations to keypoints
    for (const auto& point : locations) {
        keypoints.emplace_back(point, 1.0f);
    }
}