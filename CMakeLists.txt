cmake_minimum_required(VERSION 3.10)
project(FeatureDetection)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Add executable
add_executable(feature_detection src/main.cpp src/feature_detection/orb.cpp 
                src/feature_detection/fast.cpp src/feature_detection/surf.cpp 
                src/feature_detection/sift.cpp )

# Link OpenCV libraries
target_link_libraries(feature_detection ${OpenCV_LIBS})