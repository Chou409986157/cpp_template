#!/bin/bash

# Change to the build directory
cd "$(dirname "$0")/build"

# Delete CMake cache
rm -f CMakeCache.txt

# Run CMake and Make
cmake ..
make
