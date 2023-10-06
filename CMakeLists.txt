# require minimum version of Cmake
cmake_minimum_required(VERSION 3.1)

# project name
project(SimpsonLib)

# For CxxWrap.jl
# find_package(JlCxx REQUIRED)


# option to build STATIC or SHARED library
option(BUILD_SIMPSON_SHARED "Build the simpson library shared." ON)
if(BUILD_SIMPSON_SHARED)
  set(SIMPSON_LIBRARY_TYPE SHARED)
else()
  set(SIMPSON_LIBRARY_TYPE STATIC)
endif()

# setting warning compiler flags
add_compile_options(-Wall -Wextra -Wpedantic)

add_subdirectory(integrator)

# add executable to the project using the specified source file
add_executable(integrate_sin integrate_sin.cpp)

# specify the library needed
target_link_libraries(integrate_sin simpson)

# specify install rules
install(TARGETS integrate_sin DESTINATION bin)
