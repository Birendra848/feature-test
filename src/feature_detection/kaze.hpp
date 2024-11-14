#ifndef KAZE_HPP
#define KAZE_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesKAZE(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // KAZE_HPP