//ֻ�������ͷ�ļ�һ�Ρ�
#pragma once
#include <GLFW/glfw3.h>
#include <string>

//�����ռ䣺���Ժ�����ļ���������ṹ��Ĳ�ͬ�㡣
namespace cre
{
    class CreWindow
    {
        public:
            CreWindow(int w, int h, std::string name);
            ~CreWindow();

            // ���ÿ������캯��
            // ���ÿ�����ֵ�����
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