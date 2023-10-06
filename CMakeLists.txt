cmake_minimum_required(VERSION 3.10)

project(SimpsonIntegration)

# Add option for building shared libraries
option(BUILD_SHARED_LIBS "Build shared libraries" ON)

# Depending on the option, set the library type
if(BUILD_SHARED_LIBS)
    set(LIB_TYPE SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

# Include directories for the project
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories to the build
add_subdirectory(src)

# If you wish to build examples as well
add_subdirectory(examples)
