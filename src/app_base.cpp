#include "app_base.hpp"
namespace cre
{
    void AppBase::run() 
    {
        // 窗口事件处理循环
        while (!creWindow.shouldClose()) 
        {
            // 处理事件
            glfwPollEvents();
        }
    }
}