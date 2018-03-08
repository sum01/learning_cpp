cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Overloading VERSION 1.0.0 LANGUAGES CXX)

add_executable(overloading
	src/main.cpp
	src/myclass.cpp
)

target_include_directories(overloading
	PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	PUBLIC $<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
)
