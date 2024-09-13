cmake_minimum_required(VERSION 3.10)

# 项目名称和版本
project(Vulkan_workspace VERSION 1.0)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# # 包含 vcpkg 的工具链文件（如果使用了 vcpkg）
# set(CMAKE_TOOLCHAIN_FILE "D:/vcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake")

# 查找 Vulkan 和 GLFW 库
find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

# 添加可执行文件
add_executable(Vulkan_workspace src/main.cpp)

# 链接 Vulkan、GLFW 和 GLM 库
target_link_libraries(Vulkan_workspace PRIVATE Vulkan::Vulkan glfw glm::glm)

# 指定包含目录（可选，如果有自己的头文件）
target_include_directories(Vulkan_workspace PRIVATE include)
