#ifndef ORB_HPP
#define ORB_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesORB(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // ORB_HPP