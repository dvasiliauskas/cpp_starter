cmake_minimum_required(VERSION 3.5)
project(<PROJECT_NAME>)
set(CMAKE_CXX_STANDARD 11)


set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

add_subdirectory(lib/googletest)
add_subdirectory(lib/json)

include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

set(SOURCE_FILES main.cpp <OTHER_FILES>)
add_executable(<EXECUTABLE_NAME> ${SOURCE_FILES})
target_link_libraries(<EXECUTABLE_NAME> gtest gtest_main)
