#include "game.hpp"
#include <hexrgbGL.h>
#include <GL/gl.h>

void run_game(GLFWwindow *window)
{
    // main loop
    while (!glfwWindowShouldClose(window))
    {
        auto color = fixColorsGL("#1a2f3cff");                // color
        glClearColor(color[0], color[1], color[2], color[3]); // use color
        glClear(GL_COLOR_BUFFER_BIT);                         // clear screen
        glfwSwapBuffers(window); // buffer swap
        glfwPollEvents();        // poll events
    }
}
