# Minimum version of CMake required to build this project
# We choose a modern but widely supported version
cmake_minimum_required(VERSION 3.26)

# Name of the project
# This name is also used for the executable
project(MyProject)

# Tell CMake which version of C++ to use
# C++17 is modern, stable, and more than enough for this demo
set(CMAKE_CXX_STANDARD 17)

# Create an executable program
# The first argument is the name of the program
# The remaining files are the source (.cpp) and header (.h) files
# IMPORTANT: Every .cpp file MUST be listed here
add_executable(MyProject
        main.cpp
        Student.cpp
        Student.h
)

# WARNING:
# If your program compiles but functions seem to be "missing",
# make sure the .cpp file is listed here!

