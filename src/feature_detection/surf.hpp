#ifndef SURF_HPP
#define SURF_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesSURF(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // SURF_HPP