#include <iostream>
using namespace std;

#include <GL/glew.h>

#include <GL/glu.h>

#include <GLFW/glfw3.h>

#include "Program.h"

int main() {

    Program* program = new Program();

    if (!glfwInit()) {
        cout << "glfw did not initialize!" << endl;
        return -1;
    }

    glfwWindowHint(GL_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window;
    window = glfwCreateWindow(1920, 1200, "", NULL, NULL);
    if (!window) {
        cout << "window == null" << endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    
    program->init();

    while ( !glfwWindowShouldClose( window ) )
    {
        program->update(0.d);
        program->render(0.d);
        glfwSwapBuffers( window );
        glfwPollEvents();
    }
    
    program->close();
    
    glfwTerminate();
}
