cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")

project(libbusex)

###############################################################################
# Set the output directories for libraries and binary files
if(MSVC OR CMAKE_GENERATOR STREQUAL "Xcode")
	# Since visual studio builds are multiconfiguration, set two separate directories for debug and release builds
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${libbusex_BINARY_DIR}/bin/debug)
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${libbusex_BINARY_DIR}/bin/release)
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${libbusex_BINARY_DIR}/bin/release)
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${libbusex_BINARY_DIR}/lib/debug)
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${libbusex_BINARY_DIR}/lib/release)
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO ${libbusex_BINARY_DIR}/lib/release)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${libbusex_BINARY_DIR}/bin/debug)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${libbusex_BINARY_DIR}/bin/release)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${libbusex_BINARY_DIR}/bin/release)
	# Make sure the output bin directories exist, so the cmake scripts can copy 
	# third party dlls there if needed.
	file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG})
	file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})
else(MSVC OR CMAKE_GENERATOR STREQUAL "Xcode")
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${libbusex_BINARY_DIR}/bin)
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${libbusex_BINARY_DIR}/lib)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${libbusex_BINARY_DIR}/bin)
	file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
	file(MAKE_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
endif(MSVC OR CMAKE_GENERATOR STREQUAL "Xcode")

find_package(boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)

SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(src)
add_subdirectory(examples)