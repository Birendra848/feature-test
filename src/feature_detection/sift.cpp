#include "sift.hpp"
#include <opencv2/xfeatures2d.hpp>

void detectFeaturesSIFT(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::Ptr<cv::xfeatures2d::SIFT> sift = cv::xfeatures2d::SIFT::create();
    sift->detectAndCompute(gray, cv::noArray(), keypoints, descriptors);
}