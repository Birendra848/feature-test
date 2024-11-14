cmake_minimum_required(VERSION 3.10)
project(FeatureDetection)

# Find OpenCV package
find_package(OpenCV REQUIRED)
find_package(OpenCV REQUIRED COMPONENTS xfeatures2d)

# Add executables
#add_executable(feature_detection src/main.cpp src/feature_detection/orb.cpp src/feature_detection/fast.cpp src/feature_detection/surf.cpp src/feature_detection/sift.cpp src/feature_detection/harris.cpp src/feature_detection/shi_tomasi.cpp src/feature_detection/canny.cpp src/feature_detection/brisk.cpp src/feature_detection/brief.cpp src/feature_detection/mser.cpp src/feature_detection/kaze.cpp src/feature_detection/akaze.cpp src/feature_detection/hog.cpp src/feature_detection/gabor.cpp)
add_executable(feature_detection_video src/main_video.cpp src/feature_detection/orb.cpp src/feature_detection/fast.cpp src/feature_detection/surf.cpp src/feature_detection/sift.cpp src/feature_detection/harris.cpp src/feature_detection/shi_tomasi.cpp src/feature_detection/canny.cpp src/feature_detection/brisk.cpp src/feature_detection/brief.cpp src/feature_detection/mser.cpp src/feature_detection/kaze.cpp src/feature_detection/akaze.cpp src/feature_detection/hog.cpp src/feature_detection/gabor.cpp)

# Link OpenCV libraries
#target_link_libraries(feature_detection ${OpenCV_LIBS} ${OpenCV_LIBRARIES})
target_link_libraries(feature_detection_video ${OpenCV_LIBS} ${OpenCV_LIBRARIES})