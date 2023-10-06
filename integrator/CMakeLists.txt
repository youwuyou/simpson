# add library using the specified source files
add_library(simpson ${SIMPSON_LIBRARY_TYPE} simpson.cpp c_api.cpp)

# add include directories to our target library
# (PUBLIC because users of the library will need the
# include file simpson.hpp)
target_include_directories(simpson PUBLIC ./)

# specify install rules (for our library simpson)
install(TARGETS simpson
        ARCHIVE DESTINATION intergrator
        LIBRARY DESTINATION intergrator
        RUNTIME DESTINATION bin
       )

# specify install rules for the header
install(FILES simpson.hpp DESTINATION include)

