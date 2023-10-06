# Create a library from the integrator sources
add_library(integrator ${LIB_TYPE}
    integrator/simpson.cpp
)

# Assign a custom output name when built as a shared library
if(BUILD_SHARED_LIBS)
    set_target_properties(integrator PROPERTIES OUTPUT_NAME simpson)
endif()

# Build the C API 
add_library(c_api ${LIB_TYPE}
    c_api.cpp
)

# Link integrator library to c_api (if c_api uses integrator)
target_link_libraries(c_api
    integrator
)
