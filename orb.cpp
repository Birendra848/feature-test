#include <opencv2/opencv.hpp>
#include <opencv2/features2d.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// Function to resize the image while maintaining the aspect ratio
Mat resizeToFixedSize(const Mat& img, int screen_width, int screen_height) {
    double aspect_ratio = static_cast<double>(img.cols) / img.rows;
    int new_width = screen_width / 2;
    int new_height = static_cast<int>(new_width / aspect_ratio);

    // Ensure the new dimensions do not exceed half of the screen height
    if (new_height > screen_height / 2) {
        new_height = screen_height / 2;
        new_width = static_cast<int>(new_height * aspect_ratio);
    }

    Mat resized_img;
    resize(img, resized_img, Size(new_width, new_height));
    return resized_img;
}

// Function to detect features using ORB
void detectFeaturesORB(const Mat& img, vector<KeyPoint>& keypoints, Mat& descriptors) {
    // Convert to grayscale
    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);

    // Create ORB detector
    Ptr<ORB> orb = ORB::create();

    // Detect keypoints and compute descriptors
    orb->detectAndCompute(gray, noArray(), keypoints, descriptors);
}

void detectFeaturesFAST(const Mat& img, vector<KeyPoint>& keypoints) {
    // Convert to grayscale
    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);

    // Create FAST detector
    Ptr<FastFeatureDetector> fast = FastFeatureDetector::create();

    // Detect keypoints
    fast->detect(gray, keypoints);
}

void saveImageWithPrefix(const Mat& img, const string& prefix, const string& originalName) {
    string outputPath = "/home/biren/feature-test/output/" + prefix + "_" + originalName;
    imwrite(outputPath, img);
}

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <image_name>" << endl;
        return -1;
    }

    // Base path to the images directory
    string base_path = "/home/biren/feature-test/data/images/";
    string image_name = argv[1];
    string full_path = base_path + image_name;

    // Loading the image
    Mat img = imread(full_path);
    if (img.empty()) {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }

    // Detect features
    vector<KeyPoint> keypoints;
    // Mat descriptors;
    // detectFeaturesORB(img, keypoints, descriptors);

    detectFeaturesFAST(img, keypoints);

    // Display the number of features detected
    cout << "Number of features detected: " << keypoints.size() << endl;

    // Draw keypoints on the image
    Mat img_keypoints;
    drawKeypoints(img, keypoints, img_keypoints, Scalar(0, 0, 255), DrawMatchesFlags::DEFAULT);

    // Resize the result image to a fixed size
    // int screen_width = 1920; // Example screen width
    // int screen_height = 1080; // Example screen height
    // Mat img_keypoints_resized = resizeToFixedSize(img_keypoints, screen_width, screen_height);


    //save result
    saveImageWithPrefix(img_keypoints, "FAST", image_name);

    // Display the results
    namedWindow("Keypoints", WINDOW_NORMAL);
    imshow("Keypoints", img_keypoints);
    //imshow("Keypoints", img_keypoints_resized);
    waitKey(0); // Wait for a keystroke in the window

    return 0;
}