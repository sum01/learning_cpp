# Imported Boost target doesn't seem to exist before v3.5.2
cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Files VERSION 1.0.0 LANGUAGES CXX)

# Since we're only making an exe, everything can be PRIVATE
add_executable(files
	src/main.cpp
)

# C++14 for "auto" in function parameters
target_compile_features(files
	PRIVATE cxx_std_11
)

