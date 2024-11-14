#include "gabor.hpp"

void detectFeaturesGabor(const cv::Mat& img, std::vector<cv::KeyPoint>& keypoints) {
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    // Parameters for Gabor filter
    double lambda = 10.0;
    double theta = CV_PI / 4;
    double psi = 0;
    double sigma = 4.0;
    double gamma = 0.5;

    // Create Gabor kernel
    cv::Mat gaborKernel = cv::getGaborKernel(cv::Size(21, 21), sigma, theta, lambda, gamma, psi, CV_32F);

    // Apply Gabor filter
    cv::Mat filtered;
    cv::filter2D(gray, filtered, CV_32F, gaborKernel);

    // Convert filtered image to 8-bit
    cv::Mat filtered_8u;
    cv::convertScaleAbs(filtered, filtered_8u);

    // Detect edges using Canny
    cv::Mat edges;
    cv::Canny(filtered_8u, edges, 50, 150);

    // Find contours
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(edges, contours, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);

    // Convert contours to keypoints (edge features)
    /*
    for (const auto& contour : contours) {
        for (const auto& point : contour) {
            keypoints.push_back(cv::KeyPoint(point, 1));
        }
    }
    */
    // Detect texture features using Gabor filter response
    for (int y = 0; y < filtered_8u.rows; y++) {
        for (int x = 0; x < filtered_8u.cols; x++) {
            if (filtered_8u.at<uchar>(y, x) > 128) { // Threshold to find texture features
                keypoints.push_back(cv::KeyPoint(cv::Point(x, y), 1));
            }
        }
    }
}