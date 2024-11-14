#ifndef GABOR_HPP
#define GABOR_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesGabor(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // GABOR_HPP