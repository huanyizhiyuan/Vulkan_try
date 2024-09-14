#include "cre_window.hpp"

namespace cre
{
    CreWindow::CreWindow(int w, int h, std::string name) : width(w), height(h), windowName(name){
        initWindow();
    }

    CreWindow::~CreWindow() 
    {
        // ����һ���Ѿ������Ĵ��ڣ��ͷ���ص���Դ�������ڲ���ʹ�ô���ʱ���á�
        glfwDestroyWindow(window);
        
        // ��ֹ GLFW���ͷ� GLFW ʹ�õ�������Դ��ͨ���ڳ����˳�ʱ���á�
        glfwTerminate();
    }

    void CreWindow::initWindow()
    {
        // ��ʼ�� GLFW �⡣��������ʹ���κ� GLFW ����֮ǰ���á�
        glfwInit();

        // ���ô��ڴ���ʱ��ѡ��
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // ����OpenGL��ʹ��Vulkan
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);   // ���ô��ڴ�С����

        // ����һ��ָ����ȡ��߶Ⱥʹ������ƵĴ��ڡ�
        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}