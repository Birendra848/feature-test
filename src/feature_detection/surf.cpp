#include <opencv2/xfeatures2d.hpp>
#include "surf.hpp"

void detectFeaturesSURF(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::Ptr<cv::xfeatures2d::SURF> surf = cv::xfeatures2d::SURF::create();
    surf->detectAndCompute(gray, cv::noArray(), keypoints, descriptors);
}