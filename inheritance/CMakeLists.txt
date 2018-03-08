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
	$<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
)
