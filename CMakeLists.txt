project(glimmercccc)

if(NOT DEFINED CCCC_VERSION)
    string(TIMESTAMP CCCC_VERSION "%Y%m%d")
endif()

set(CCCC_VERSION_MAJOR 2)
set(CCCC_VERSION_MINOR 0)
set(CCCC_VERSION_PATCH ${CCCC_VERSION})
set(CCCC_VERSION_STRING ${CCCC_VERSION_MAJOR}.${CCCC_VERSION_MINOR}.${CCCC_VERSION_PATCH})
message(STATUS "CCCC_VERSION_STRING = ${CCCC_VERSION_STRING}")
cmake_minimum_required(VERSION 2.6)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

option(CCCC_WITH_GPU "GPU support" ON)
option(CCCC_WITH_PYTHON "build python api" OFF)
message("CCCC_WITH_GPU is set to: ${CCCC_WITH_GPU}")

add_subdirectory(backend)
add_subdirectory(cccc)
add_subdirectory(benchmark)
add_subdirectory(examples)

if(CCCC_WITH_PYTHON)
add_subdirectory(pycccc)
endif()
