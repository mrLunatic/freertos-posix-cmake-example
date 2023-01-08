cmake_minimum_required(VERSION 3.8)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(FreeRTOS)

project(freertos-posix-cmake-example LANGUAGES C CXX)
add_executable(freertos-posix-cmake-example src/FreeRtosSupport.c src/main.cpp)

FetchFreeRTOS(freertos_kernel "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(freertos-posix-cmake-example PRIVATE freertos_kernel)
