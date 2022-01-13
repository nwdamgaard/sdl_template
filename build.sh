#!/bin/bash
# Simply creates a build folder and runs CMake in it.

./clean.sh
cd build
cmake . -DPRJ_NAME=`cat ../project_name.txt`
make
