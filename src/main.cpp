#include <GLFW/glfw3.h>
#include <iostream>
#include "game.hpp"

int main(void)
{
    // init glfw
    if (!glfwInit())
    {
        std::cerr << "failed to initialize glfw\n";
        return -1;
    }

    // create a window
    GLFWwindow *window = glfwCreateWindow(800, 600, "g", nullptr, nullptr);
    if (!window)
    {
        std::cerr << "failed to create gflw window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // run the game
    run_game(window);

    // cleanup
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
