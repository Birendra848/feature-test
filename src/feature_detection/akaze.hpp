#ifndef AKAZE_HPP
#define AKAZE_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesAKAZE(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // AKAZE_HPP