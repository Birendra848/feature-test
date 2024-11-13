#ifndef SIFT_HPP
#define SIFT_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesSIFT(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // SIFT_HPP