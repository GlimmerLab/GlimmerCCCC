project(cccc-examples)

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_COMPILER $ENV{CXX})
set(CMAKE_CXX_FLAGS "-O3 -std=c++17 -pthread -fopenmp")

aux_source_directory(./ SRC_LIST)

include_directories(/usr/local/cuda-11.6/include ../mlcc ../backend/cuda ../cccc)
add_library(cccc-examples SHARED ${SRC_LIST})
target_link_libraries(cccc-examples cccc)

