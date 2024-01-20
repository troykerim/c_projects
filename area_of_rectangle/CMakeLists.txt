# Set minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Set name of project (as PROJECT_NAME) and C/C++ standards
project(rectangle C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Tell CMake where to find the executable source file
add_executable(${PROJECT_NAME}
    rectangle.c
)