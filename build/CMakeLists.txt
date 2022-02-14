cmake_minimum_required(VERSION 3.10)

SET (SRC "../src")
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/)

project(${PRJ_NAME})

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB SRC_FILES CONFIGURE_DEPENDS "${SRC}/*.cpp" "${SRC}/*.c")

include_directories("${SRC}")
add_executable(${PRJ_NAME} ${SRC_FILES})
target_link_libraries(${PRJ_NAME} ${SDL2_LIBRARIES})
