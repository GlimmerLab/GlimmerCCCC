cmake_minimum_required(VERSION 2.6)
project(cccc)
set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_COMPILER $ENV{CXX})
set(CMAKE_CXX_FLAGS "-O3 -std=c++17 -pthread -fopenmp -DNDEBUG")
if (UNIX)
	set(CUDA_TOOLKIT_ROOT_DIR "/usr/local/cuda-11.6/")
	set(CUDA_LIB_DIR "${CUDA_TOOLKIT_ROOT_DIR}/lib64")
elseif (WIN32)
    find_package(CUDA)
	set(CUDA_LIB_DIR "${CUDA_TOOLKIT_ROOT_DIR}/lib/x64")
endif()
set(CUDA_INCLUDE "${CUDA_TOOLKIT_ROOT_DIR}/include")

file(GLOB SRC_LIST
    ./*.cpp
    ./*.c
    ../mlcc/*.cpp
    ../mlcc/*.c) #将路径下所有的相关源文件写入SRC_LIST, 如果需要搜索文件夹内的源文件则把GLOB_RECURSE替换GLOB

include_directories(${CUDA_INCLUDE} ${CUDA_INCLUDE}/crt ../mlcc ../backend/cuda .)
link_directories(${CUDA_LIB_DIR})
add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} PRIVATE cccc-cuda cudnn cudart cublas)
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib)
if(WIN32)
elseif(UNIX)
	target_link_libraries(${PROJECT_NAME} PRIVATE pthread)
endif()

