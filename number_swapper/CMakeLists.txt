cmake_minimum_required(VERSION 3.12)

project(swapper C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME}
    swapper.c
)

# Link the math library to the project
target_link_libraries(${PROJECT_NAME} m)