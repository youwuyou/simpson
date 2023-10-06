# List the source files
set(SIMPSON_SOURCE_FILES
    integrator/simpson.cpp
    c_api.cpp
)

# List the header files
set(SIMPSON_HEADER_FILES
    ${CMAKE_SOURCE_DIR}/include/integrator/simpson.hpp
    ${CMAKE_SOURCE_DIR}/include/c_api.h
)

# Create a library from the integrator sources
add_library(simpson ${LIB_TYPE} ${SIMPSON_SOURCE_FILES})

# Install the library
install(TARGETS simpson
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

# Install the header files
install(FILES ${SIMPSON_HEADER_FILES} DESTINATION include)

# Assign a custom output name when built as a shared library
if(BUILD_SHARED_LIBS)
    set_target_properties(simpson PROPERTIES OUTPUT_NAME simpson)
endif()
