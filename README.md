# Feature Detection in Computer Vision

This repository contains implementations of various feature detection algorithms in computer vision using OpenCV. The project is structured to be modular, with each feature detection algorithm implemented in its own file.

## Table of Contents

- [Feature Detection Algorithms](#feature-detection-algorithms)
- [Dependencies](#dependencies)
- [Building the Project](#building-the-project)
- [Running the Project](#running-the-project)
- [Contributing](#contributing)

## Feature Detection Algorithms

The following feature detection algorithms are implemented in this project:

1. Harris Corner Detector
2. Shi-Tomasi Corner Detector
3. Scale-Invariant Feature Transform (SIFT)
4. Speeded-Up Robust Features (SURF)
5. Oriented FAST and Rotated BRIEF (ORB)
6. Binary Robust Invariant Scalable Keypoints (BRISK)
7. Features from Accelerated Segment Test (FAST)
8. Maximally Stable Extremal Regions (MSER)
9. KAZE and Accelerated-KAZE (AKAZE)
10. Histogram of Oriented Gradients (HOG)


## Dependencies

- OpenCV 4.x
- CMake 3.10 or higher

## Building the Project

To build the project, follow these steps:

1. Clone the repository:
    ```sh
    https://github.com/Birendra848/feature-test.git
    cd feature-detection
    ```

2. Create a build directory and navigate to it:
    ```sh
    mkdir build
    cd build
    ```

3. Run CMake to configure the project:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    make
    ```

## Running the Project

To run the project:
run the code with different feature detectors by specifying the detector name as a command-line argument:
- Replace <te1.jpg> with the name of the image file you want to process. The image should be located in the data/images/ directory.
```sh
#Example
./feature_detection ORB te1.jpg
```
```sh
./feature_detection FAST te1.jpg
```

## Contributing
Contributions are welcome! Please open an issue or submit a pull request if you have any improvements or new feature detection algorithms to add.
