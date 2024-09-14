//只包含这个头文件一次。
#pragma once
#include <GLFW/glfw3.h>
#include <string>

//命名空间：可以横跨多个文件，跟类与结构体的不同点。
namespace cre
{
    class CreWindow
    {
        public:
            CreWindow(int w, int h, std::string name);
            ~CreWindow();

            // 禁用拷贝构造函数
            // 禁用拷贝赋值运算符
            CreWindow(const CreWindow &) = delete;
            CreWindow &operator=(const CreWindow &) = delete;

            bool shouldClose() { return glfwWindowShouldClose(window); }
            
        private:
            void initWindow();
            const int width;
            const int height;
            std::string windowName;
            GLFWwindow *window;
    };
}