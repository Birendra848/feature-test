#include "orb.hpp"

void detectFeaturesORB(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::Ptr<cv::ORB> orb = cv::ORB::create();
    orb->detectAndCompute(gray, cv::noArray(), keypoints, descriptors);
}