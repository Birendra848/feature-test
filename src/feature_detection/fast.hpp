#ifndef FAST_HPP
#define FAST_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesFAST(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // FAST_HPP