#include "app_base.hpp"
namespace cre
{
    void AppBase::run() 
    {
        // �����¼�����ѭ��
        while (!creWindow.shouldClose()) 
        {
            // �����¼�
            glfwPollEvents();
        }
    }
}