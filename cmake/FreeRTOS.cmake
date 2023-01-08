cmake_minimum_required(VERSION 3.8)
include(FetchContent)

function(FetchFreeRTOS freertos_kernel CONFIG_INCLUDE_DIR)
    set(FREERTOS_CONFIG_FILE_DIRECTORY "${CONFIG_INCLUDE_DIR}" CACHE STRING "")
    set(FREERTOS_PORT "GCC_POSIX" CACHE STRING "")

    FetchContent_Declare(freertos_kernel
        GIT_REPOSITORY https://github.com/FreeRTOS/FreeRTOS-Kernel.git
        GIT_TAG        V10.5.1
    )

    FetchContent_MakeAvailable(freertos_kernel)
endfunction()
