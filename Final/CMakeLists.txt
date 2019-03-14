cmake_minimum_required(VERSION 3.13)
project(Final)

set(CMAKE_CXX_STANDARD 14)

add_executable(Final cmake-build-debug/Main/main.cpp cmake-build-debug/Main/Collector.cpp cmake-build-debug/Main/Collector.h cmake-build-debug/Main/List.cpp cmake-build-debug/Main/List.h cmake-build-debug/Main/Node.cpp cmake-build-debug/Main/Node.h)