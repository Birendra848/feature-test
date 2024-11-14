#ifndef BRISK_HPP
#define BRISK_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesBRISK(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // BRISK_HPP