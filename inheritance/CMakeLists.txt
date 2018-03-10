cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Inheritance VERSION 1.0.0 LANGUAGES CXX)

add_executable(inheritance
	src/main.cpp
	src/mother.cpp
	src/daughter.cpp
	src/enemy.cpp
	src/monster.cpp
	src/ninja.cpp
)

target_include_directories(inheritance PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	$<INSTALL_INTERFACE:src>
)

set_target_properties(inheritance PROPERTIES
	PRIVATE_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/src/daughter.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/enemy.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/monster.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/mother.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/ninja.hpp"
)

target_compile_features(inheritance
	PRIVATE cxx_std_11
)
