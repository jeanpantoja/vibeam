cmake_minimum_required( VERSION 3.1 )

project( vibeam_test )

set(
    VIBEAM_TEST_SOURCE
    main.cpp
    vibeam/composition/Material.cpp
)

set( CMAKE_CXX_STANDARD 11 )

add_executable( vibeam_test ${VIBEAM_SOURCE} ${VIBEAM_TEST_SOURCE} )