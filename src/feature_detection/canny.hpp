#ifndef CANNY_HPP
#define CANNY_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesCanny(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // CANNY_HPP