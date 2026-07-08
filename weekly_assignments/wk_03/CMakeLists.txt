cmake_minimum_required(VERSION 3.11)

project(ui_module)
set(CMAKE_CXX_STANDARD 20)
# Connecting our local install of glfw3
set(glfw3_DIR "C:/Program Files (x86)/GLFW/lib/cmake/glfw3")

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)


# Just going to pull imgui from the repo instead of downloading or cloning
include(FetchContent)

FetchContent_Declare(
        imgui
        GIT_REPOSITORY https://github.com/ocornut/imgui.git
        GIT_TAG v1.92.6 # Better later: pin this to a specific commit hash
)

FetchContent_MakeAvailable(imgui)

add_library(imgui STATIC
        ${imgui_SOURCE_DIR}/imgui.cpp
        ${imgui_SOURCE_DIR}/imgui_draw.cpp
        ${imgui_SOURCE_DIR}/imgui_tables.cpp
        ${imgui_SOURCE_DIR}/imgui_widgets.cpp
        ${imgui_SOURCE_DIR}/imgui_demo.cpp
)

target_include_directories(imgui PUBLIC
        ${imgui_SOURCE_DIR}
)

add_library(imgui_stdlib STATIC
        ${imgui_SOURCE_DIR}/misc/cpp/imgui_stdlib.cpp
)

target_include_directories(imgui_stdlib PUBLIC
        ${imgui_SOURCE_DIR}/misc/cpp
)

target_link_libraries(imgui_stdlib PUBLIC
        imgui
)

add_library(imgui_glfw STATIC
        ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
)

target_include_directories(imgui_glfw PUBLIC
        ${imgui_SOURCE_DIR}/backends
)

target_link_libraries(imgui_glfw PUBLIC
        imgui
        glfw
)

add_library(imgui_opengl3 STATIC
        ${imgui_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp
)

target_include_directories(imgui_opengl3 PUBLIC
        ${imgui_SOURCE_DIR}/backends
)

target_link_libraries(imgui_opengl3 PUBLIC
        imgui
        OpenGL::GL
)

file(GLOB SRC_FILES CONFIGURE_DEPENDS src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} PRIVATE
    imgui
        imgui_stdlib
        imgui_glfw
        imgui_opengl3
        glfw
        OpenGL::GL
)

set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_NAME "gui_app"
)