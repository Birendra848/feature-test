#ifndef SHI_TOMASI_HPP
#define SHI_TOMASI_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesShiTomasi(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // SHI_TOMASI_HPP