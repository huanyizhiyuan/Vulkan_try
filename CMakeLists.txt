cmake_minimum_required(VERSION 3.10)

# 项目名称和版本
project(Vulkan_workspace VERSION 1.0)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 查找 Vulkan 和 GLFW 库
find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

# 自动查找 src 文件夹中的所有 cpp 文件
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# 添加可执行文件（main.cpp 包含在 SOURCES 中，自动作为入口点）
add_executable(Vulkan_workspace ${SOURCES})

# 链接 Vulkan、GLFW 和 GLM 库
target_link_libraries(Vulkan_workspace PRIVATE Vulkan::Vulkan glfw glm::glm)

# 指定包含目录(include 目录中存放 .hpp 文件)
target_include_directories(Vulkan_workspace PRIVATE ${PROJECT_SOURCE_DIR}/include)

# 功能介绍
# 指定 C++ 版本：使用 C++20 标准。
# 查找必要的库：查找 Vulkan、GLFW 和 GLM 库。
# 自动查找源文件：通过 file(GLOB) 自动查找 src 文件夹中的所有 .cpp 文件。
# 添加可执行文件：通过 add_executable 将这些源文件编译成可执行文件。
# 链接库：通过 target_link_libraries 链接 Vulkan、GLFW 和 GLM 库。
# 包含头文件目录：通过 target_include_directories 指定 include 目录，让 CMake 找到 .hpp 文件。