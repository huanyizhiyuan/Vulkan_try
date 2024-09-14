#pragma once

#include "cre_window.hpp"

namespace cre 
{
    class AppBase
    {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;

            void run();

        private:
            CreWindow creWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    };
}