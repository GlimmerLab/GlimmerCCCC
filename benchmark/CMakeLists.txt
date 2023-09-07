project(cccc-benchmark)
cmake_minimum_required(VERSION 2.6)

aux_source_directory(./ SRC_LIST)

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_COMPILER $ENV{CXX})
set(CMAKE_CXX_FLAGS "-O3 -std=c++17 -pthread -fopenmp -DNDEBUG")
find_library(OPENBLAS_LIB HINTS /opt/OpenBLAS)
message(${OPENBLAS_LIB})
include_directories(/usr/local/cuda-11.6/include /usr/local/cuda-11.6/include/crt ../mlcc ../backend/cuda ../cccc)
link_directories(/usr/local/cuda-11.6/lib64 /opt/OpenBLAS/lib)

add_executable(cccc-benchmark ${SRC_LIST})
target_link_libraries(cccc-benchmark cccc cccc-cuda cudnn cudart cublas openblas)

install(TARGETS cccc-benchmark RUNTIME DESTINATION bin)
