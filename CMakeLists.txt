# CMake setup
cmake_minimum_required(VERSION 3.21)
project(classic_win_gui VERSION 0.1.0 LANGUAGES C)

# C configuration
set(CMAKE_C_CLANG_TIDY clang-tidy -checks=-*,readability-*)
set(CMAKE_C_STANDARD 99)

# Path helper variables
set(cwgSrc ${CMAKE_SOURCE_DIR}/src)

# SDL setup
find_package(SDL3 REQUIRED COMPONENTS SDL3)
get_target_property(cwgSDLLocation SDL3::SDL3 IMPORTED_LOCATION)

# Includes
include_directories(${cwgSrc})

# Library configuration and sources
add_library(cwg)
add_subdirectory(${cwgSrc})

# Link SDL
target_link_directories(cwg PRIVATE ${cwgSDLLocation})
target_link_libraries(cwg PRIVATE SDL3::SDL3)

# Sample app build and link to engine
add_executable(app ${cwgSrc}/app.c)
target_link_libraries(app cwg)
