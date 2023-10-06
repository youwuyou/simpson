# Example executable
add_executable(integrate_sin
    integrate_sin.cpp
)

# Link libraries to the example
target_link_libraries(integrate_sin
    integrator
    c_api
)
