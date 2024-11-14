#ifndef MSER_HPP
#define MSER_HPP

#include <opencv2/opencv.hpp>
#include <vector>

void detectFeaturesMSER(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints);

#endif // MSER_HPP