# Create a library from the integrator sources
add_library(simpson ${LIB_TYPE}
    integrator/simpson.cpp
    c_api.cpp
)

# Assign a custom output name when built as a shared library
if(BUILD_SHARED_LIBS)
    set_target_properties(simpson PROPERTIES OUTPUT_NAME simpson)
endif()