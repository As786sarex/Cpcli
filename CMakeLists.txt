cmake_minimum_required(VERSION 3.15)
project(cpcli)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpcli main.cpp headers/c++.h headers/help.h headers/utility.h headers/constants.h headers/parser.h)