cmake_minimum_required( VERSION 3.1 )

project( vibeam )

include_directories(
    include
    thirdparty/catch2/single_include
)

set(
    VIBEAM_SOURCE
    ${CMAKE_SOURCE_DIR}/src/composition/Material.cpp
)

add_subdirectory( test )
