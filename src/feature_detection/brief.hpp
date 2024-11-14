#ifndef BRIEF_HPP
#define BRIEF_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesBRIEF(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

#endif // BRIEF_HPP