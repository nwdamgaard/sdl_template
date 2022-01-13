#!/bin/bash
# Deletes all build files.

cp build/CMakeLists.txt CMakeLists.txt
rm -rf build
mkdir build
cp CMakeLists.txt build/CMakeLists.txt
rm CMakeLists.txt

rm -rf bin
