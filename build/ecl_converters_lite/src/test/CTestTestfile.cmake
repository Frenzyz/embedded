# CMake generated Testfile for 
# Source directory: /home/embedded/ros2_ws/src/ThirdParty/ecl/ecl_lite/ecl_converters_lite/src/test
# Build directory: /home/embedded/ros2_ws/build/ecl_converters_lite/src/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_byte_array "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/embedded/ros2_ws/build/ecl_converters_lite/test_results/ecl_converters_lite/test_byte_array.gtest.xml" "--package-name" "ecl_converters_lite" "--output-file" "/home/embedded/ros2_ws/build/ecl_converters_lite/ament_cmake_gtest/test_byte_array.txt" "--command" "/home/embedded/ros2_ws/build/ecl_converters_lite/src/test/test_byte_array" "--gtest_output=xml:/home/embedded/ros2_ws/build/ecl_converters_lite/test_results/ecl_converters_lite/test_byte_array.gtest.xml")
set_tests_properties(test_byte_array PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/embedded/ros2_ws/build/ecl_converters_lite/src/test/test_byte_array" TIMEOUT "60" WORKING_DIRECTORY "/home/embedded/ros2_ws/build/ecl_converters_lite/src/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/embedded/ros2_ws/src/ThirdParty/ecl/ecl_lite/ecl_converters_lite/src/test/CMakeLists.txt;5;ament_add_gtest;/home/embedded/ros2_ws/src/ThirdParty/ecl/ecl_lite/ecl_converters_lite/src/test/CMakeLists.txt;0;")
subdirs("../../gtest")
