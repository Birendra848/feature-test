# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/biren/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/biren/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/biren/feature-test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/biren/feature-test/build

# Include any dependencies generated for this target.
include CMakeFiles/feature_detection.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/feature_detection.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/feature_detection.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/feature_detection.dir/flags.make

CMakeFiles/feature_detection.dir/src/main.cpp.o: CMakeFiles/feature_detection.dir/flags.make
CMakeFiles/feature_detection.dir/src/main.cpp.o: /home/biren/feature-test/src/main.cpp
CMakeFiles/feature_detection.dir/src/main.cpp.o: CMakeFiles/feature_detection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/biren/feature-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/feature_detection.dir/src/main.cpp.o"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/feature_detection.dir/src/main.cpp.o -MF CMakeFiles/feature_detection.dir/src/main.cpp.o.d -o CMakeFiles/feature_detection.dir/src/main.cpp.o -c /home/biren/feature-test/src/main.cpp

CMakeFiles/feature_detection.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/feature_detection.dir/src/main.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biren/feature-test/src/main.cpp > CMakeFiles/feature_detection.dir/src/main.cpp.i

CMakeFiles/feature_detection.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/feature_detection.dir/src/main.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biren/feature-test/src/main.cpp -o CMakeFiles/feature_detection.dir/src/main.cpp.s

CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o: CMakeFiles/feature_detection.dir/flags.make
CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o: /home/biren/feature-test/src/feature_detection/orb.cpp
CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o: CMakeFiles/feature_detection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/biren/feature-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o -MF CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o.d -o CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o -c /home/biren/feature-test/src/feature_detection/orb.cpp

CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biren/feature-test/src/feature_detection/orb.cpp > CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.i

CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biren/feature-test/src/feature_detection/orb.cpp -o CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.s

CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o: CMakeFiles/feature_detection.dir/flags.make
CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o: /home/biren/feature-test/src/feature_detection/fast.cpp
CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o: CMakeFiles/feature_detection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/biren/feature-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o -MF CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o.d -o CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o -c /home/biren/feature-test/src/feature_detection/fast.cpp

CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biren/feature-test/src/feature_detection/fast.cpp > CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.i

CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biren/feature-test/src/feature_detection/fast.cpp -o CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.s

CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o: CMakeFiles/feature_detection.dir/flags.make
CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o: /home/biren/feature-test/src/feature_detection/surf.cpp
CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o: CMakeFiles/feature_detection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/biren/feature-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o -MF CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o.d -o CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o -c /home/biren/feature-test/src/feature_detection/surf.cpp

CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biren/feature-test/src/feature_detection/surf.cpp > CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.i

CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biren/feature-test/src/feature_detection/surf.cpp -o CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.s

CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o: CMakeFiles/feature_detection.dir/flags.make
CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o: /home/biren/feature-test/src/feature_detection/sift.cpp
CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o: CMakeFiles/feature_detection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/biren/feature-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o -MF CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o.d -o CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o -c /home/biren/feature-test/src/feature_detection/sift.cpp

CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biren/feature-test/src/feature_detection/sift.cpp > CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.i

CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biren/feature-test/src/feature_detection/sift.cpp -o CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.s

# Object files for target feature_detection
feature_detection_OBJECTS = \
"CMakeFiles/feature_detection.dir/src/main.cpp.o" \
"CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o" \
"CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o" \
"CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o" \
"CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o"

# External object files for target feature_detection
feature_detection_EXTERNAL_OBJECTS =

feature_detection: CMakeFiles/feature_detection.dir/src/main.cpp.o
feature_detection: CMakeFiles/feature_detection.dir/src/feature_detection/orb.cpp.o
feature_detection: CMakeFiles/feature_detection.dir/src/feature_detection/fast.cpp.o
feature_detection: CMakeFiles/feature_detection.dir/src/feature_detection/surf.cpp.o
feature_detection: CMakeFiles/feature_detection.dir/src/feature_detection/sift.cpp.o
feature_detection: CMakeFiles/feature_detection.dir/build.make
feature_detection: /usr/local/lib/libopencv_gapi.so.4.1.0
feature_detection: /usr/local/lib/libopencv_stitching.so.4.1.0
feature_detection: /usr/local/lib/libopencv_aruco.so.4.1.0
feature_detection: /usr/local/lib/libopencv_bgsegm.so.4.1.0
feature_detection: /usr/local/lib/libopencv_bioinspired.so.4.1.0
feature_detection: /usr/local/lib/libopencv_ccalib.so.4.1.0
feature_detection: /usr/local/lib/libopencv_dnn_objdetect.so.4.1.0
feature_detection: /usr/local/lib/libopencv_dpm.so.4.1.0
feature_detection: /usr/local/lib/libopencv_face.so.4.1.0
feature_detection: /usr/local/lib/libopencv_freetype.so.4.1.0
feature_detection: /usr/local/lib/libopencv_fuzzy.so.4.1.0
feature_detection: /usr/local/lib/libopencv_hdf.so.4.1.0
feature_detection: /usr/local/lib/libopencv_hfs.so.4.1.0
feature_detection: /usr/local/lib/libopencv_img_hash.so.4.1.0
feature_detection: /usr/local/lib/libopencv_line_descriptor.so.4.1.0
feature_detection: /usr/local/lib/libopencv_quality.so.4.1.0
feature_detection: /usr/local/lib/libopencv_reg.so.4.1.0
feature_detection: /usr/local/lib/libopencv_rgbd.so.4.1.0
feature_detection: /usr/local/lib/libopencv_saliency.so.4.1.0
feature_detection: /usr/local/lib/libopencv_stereo.so.4.1.0
feature_detection: /usr/local/lib/libopencv_structured_light.so.4.1.0
feature_detection: /usr/local/lib/libopencv_superres.so.4.1.0
feature_detection: /usr/local/lib/libopencv_surface_matching.so.4.1.0
feature_detection: /usr/local/lib/libopencv_tracking.so.4.1.0
feature_detection: /usr/local/lib/libopencv_videostab.so.4.1.0
feature_detection: /usr/local/lib/libopencv_xfeatures2d.so.4.1.0
feature_detection: /usr/local/lib/libopencv_xobjdetect.so.4.1.0
feature_detection: /usr/local/lib/libopencv_xphoto.so.4.1.0
feature_detection: /usr/local/lib/libopencv_shape.so.4.1.0
feature_detection: /usr/local/lib/libopencv_datasets.so.4.1.0
feature_detection: /usr/local/lib/libopencv_plot.so.4.1.0
feature_detection: /usr/local/lib/libopencv_text.so.4.1.0
feature_detection: /usr/local/lib/libopencv_dnn.so.4.1.0
feature_detection: /usr/local/lib/libopencv_ml.so.4.1.0
feature_detection: /usr/local/lib/libopencv_phase_unwrapping.so.4.1.0
feature_detection: /usr/local/lib/libopencv_optflow.so.4.1.0
feature_detection: /usr/local/lib/libopencv_ximgproc.so.4.1.0
feature_detection: /usr/local/lib/libopencv_video.so.4.1.0
feature_detection: /usr/local/lib/libopencv_objdetect.so.4.1.0
feature_detection: /usr/local/lib/libopencv_calib3d.so.4.1.0
feature_detection: /usr/local/lib/libopencv_features2d.so.4.1.0
feature_detection: /usr/local/lib/libopencv_flann.so.4.1.0
feature_detection: /usr/local/lib/libopencv_highgui.so.4.1.0
feature_detection: /usr/local/lib/libopencv_videoio.so.4.1.0
feature_detection: /usr/local/lib/libopencv_imgcodecs.so.4.1.0
feature_detection: /usr/local/lib/libopencv_photo.so.4.1.0
feature_detection: /usr/local/lib/libopencv_imgproc.so.4.1.0
feature_detection: /usr/local/lib/libopencv_core.so.4.1.0
feature_detection: CMakeFiles/feature_detection.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/biren/feature-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable feature_detection"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/feature_detection.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/feature_detection.dir/build: feature_detection
.PHONY : CMakeFiles/feature_detection.dir/build

CMakeFiles/feature_detection.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/feature_detection.dir/cmake_clean.cmake
.PHONY : CMakeFiles/feature_detection.dir/clean

CMakeFiles/feature_detection.dir/depend:
	cd /home/biren/feature-test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/biren/feature-test /home/biren/feature-test /home/biren/feature-test/build /home/biren/feature-test/build /home/biren/feature-test/build/CMakeFiles/feature_detection.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/feature_detection.dir/depend

