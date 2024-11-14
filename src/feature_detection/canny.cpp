#include "canny.hpp"

void detectFeaturesCanny(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::Mat gray, edges;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);
    cv::Canny(gray, edges, 100, 200);

    // Find contours
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(edges, contours, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);

    // Convert contours to keypoints
    for (const auto& contour : contours) {
        for (const auto& point : contour) {
            keypoints.push_back(cv::KeyPoint(point, 1));
        }
    }
}