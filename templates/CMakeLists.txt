# Imported Boost target doesn't seem to exist before v3.5.2
cmake_minimum_required(VERSION 3.5.2 FATAL_ERROR)
project(Templates VERSION 1.0.0 LANGUAGES CXX)

# Since we're only making an exe, everything can be PRIVATE
add_executable(templates
	src/main.cpp
)

# Boost header only used in debug builds
IF((CMAKE_BUILD_TYPE AND CMAKE_BUILD_TYPE STREQUAL "Debug") OR CMAKE_CONFIGURATION_TYPES)
	# Used to print literal variable name in sum.hpp
	# No "COMPONETS type_index" needed though, type_index is header-only
	find_package(Boost 1.66.0 REQUIRED)

	# Since it's header-only, we can use the imported headers-only target
	target_include_directories(templates
		PRIVATE Boost::boost
	)
ENDIF()

target_include_directories(templates PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	$<INSTALL_INTERFACE:src>
)

set_target_properties(templates PROPERTIES
	PRIVATE_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/src/classes.hpp;${CMAKE_CURRENT_SOURCE_DIR}/src/sum.hpp"
)

# C++14 for "auto" in function parameters
target_compile_features(templates
	PRIVATE cxx_std_14
)

