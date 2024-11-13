#include "harris.hpp"

void detectFeaturesHarris(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::Mat dst, dst_norm, dst_norm_scaled;
    dst = cv::Mat::zeros(gray.size(), CV_32FC1);

    // Detecting corners
    cv::cornerHarris(gray, dst, 2, 3, 0.04, cv::BORDER_DEFAULT);

    // Normalizing
    cv::normalize(dst, dst_norm, 0, 255, cv::NORM_MINMAX, CV_32FC1, cv::Mat());
    cv::convertScaleAbs(dst_norm, dst_norm_scaled);

    // Drawing a circle around corners
    for (int j = 0; j < dst_norm.rows; j++) {
        for (int i = 0; i < dst_norm.cols; i++) {
            if ((int)dst_norm.at<float>(j, i) > 200) {
                keypoints.push_back(cv::KeyPoint(i, j, 1));
            }
        }
    }
}