# Example executable
add_executable(integrate_sin integrate_sin.cpp)

# Link the simpson library to the example
target_link_libraries(integrate_sin simpson)