cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Hello_World VERSION 1.0.0 LANGUAGES CXX)

add_executable(hello_world
	src/main.cpp
	src/const_class.cpp
	src/my_class.cpp
	src/person.cpp
	src/birthday.cpp
)

target_include_directories(hello_world PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	$<INSTALL_INTERFACE:src>
)

set_target_properties(hello_world PROPERTIES
	PRIVATE_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/src/birthday.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/const_class.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/my_class.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/person.hpp"
)

target_compile_features(hello_world
	PRIVATE cxx_std_11
)
