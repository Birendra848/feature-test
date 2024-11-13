#ifndef HARRIS_HPP
#define HARRIS_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesHarris(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // HARRIS_HPP