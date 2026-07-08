# Variables
set(PROJECT_NAME "store_app")
set(SRC_FILE_DIR "src/*.cpp")


cmake_minimum_required(VERSION 4.0.3)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

file(GLOB SRC_FILES CONFIGURE_DEPENDS ${SRC_FILE_DIR})

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE include)
