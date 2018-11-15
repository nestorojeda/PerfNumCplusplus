cmake_minimum_required(VERSION 3.12)
project(PerfNumC)

set(CMAKE_CXX_STANDARD 14)

add_executable(PerfNumC src/main.cpp src/Iterator.cpp src/FileHandler.cpp src/PerfNum.cpp src/FileHandler.h src/PerfNum.h src/Iterator.h)