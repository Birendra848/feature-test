#ifndef HOG_HPP
#define HOG_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesHOG(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // HOG_HPP