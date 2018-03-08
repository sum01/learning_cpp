cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Hello_World VERSION 1.0.0 LANGUAGES CXX)

add_executable(hello_world
	src/main.cpp
	src/const_class.cpp
	src/my_class.cpp
	src/person.cpp
	src/birthday.cpp
)

target_include_directories(hello_world
	PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	PUBLIC $<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
)
