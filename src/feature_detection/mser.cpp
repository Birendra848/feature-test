#include "mser.hpp"
#include <opencv2/opencv.hpp>

void detectFeaturesMSER(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::Ptr<cv::MSER> mser = cv::MSER::create();
    std::vector<std::vector<cv::Point>> regions;
    std::vector<cv::Rect> bboxes; // Create a named vector for bounding boxes

    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    mser->detectRegions(gray, regions, bboxes); // Pass the named vector

    // Convert regions to keypoints
    for (const auto& region : regions) {
        std::vector<cv::Point2f> regionPoints2f;
        regionPoints2f.reserve(region.size());
        for (const auto& point : region) {
            regionPoints2f.push_back(cv::Point2f(point));
        }

        std::vector<cv::KeyPoint> regionKeypoints;
        cv::KeyPoint::convert(regionPoints2f, regionKeypoints);
        keypoints.insert(keypoints.end(), regionKeypoints.begin(), regionKeypoints.end());
    }
}