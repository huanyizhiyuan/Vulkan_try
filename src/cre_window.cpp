#include "cre_window.hpp"

namespace cre
{
    CreWindow::CreWindow(int w, int h, std::string name) : width(w), height(h), windowName(name){
        initWindow();
    }

    CreWindow::~CreWindow() 
    {
        // 销毁一个已经创建的窗口，释放相关的资源。必须在不再使用窗口时调用。
        glfwDestroyWindow(window);
        
        // 终止 GLFW，释放 GLFW 使用的所有资源。通常在程序退出时调用。
        glfwTerminate();
    }

    void CreWindow::initWindow()
    {
        // 初始化 GLFW 库。它必须在使用任何 GLFW 函数之前调用。
        glfwInit();

        // 配置窗口创建时的选项
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // 禁用OpenGL，使用Vulkan
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);   // 禁用窗口大小调整

        // 创建一个指定宽度、高度和窗口名称的窗口。
        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}