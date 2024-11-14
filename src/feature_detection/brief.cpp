#include "brief.hpp"
#include <opencv2/xfeatures2d.hpp>

void detectFeaturesBRIEF(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    // Detect keypoints using FAST
    cv::Ptr<cv::FastFeatureDetector> fast = cv::FastFeatureDetector::create();
    fast->detect(gray, keypoints);

    // Compute descriptors using BRIEF
    cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor> brief = cv::xfeatures2d::BriefDescriptorExtractor::create();
    brief->compute(gray, keypoints, descriptors);
}