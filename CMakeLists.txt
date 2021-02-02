cmake_minimum_required(VERSION 3.5)

project(RBTree LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RBTree main.cpp rbtree_set.cpp rbtree.cpp)
