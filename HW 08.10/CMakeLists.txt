cmake_minimum_required(VERSION 3.25)
project(hw VERSION 1.0.0 LANGUAGES CXX)

add_executable(hw
  src/main.cpp
)

target_compile_features(hw PRIVATE cxx_std_23)
set_target_properties(hw PROPERTIES CXX_EXTENSIONS OFF)

target_compile_options(hw PRIVATE -Wall -Wextra -Wpedantic -Werror)
