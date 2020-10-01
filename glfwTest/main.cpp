//
//  main.cpp
//  glfwTest
//
//  Created by Julien Bloit on 01/10/2020.
//  Copyright © 2020 Julien Bloit. All rights reserved.
//


/*
 Project setup:
 https://www.youtube.com/watch?v=4zjCqjfjcPs
 */

#include <GL/glew.h>
#include <GLFW/glfw3.h>


int main(int argc, const char * argv[]) {

    GLFWwindow *window;
    
    
    // init the library
    if (!glfwInit())
    {
        return -1;
    }
    
    // create windowed mode and its opengl context
    window = glfwCreateWindow(600, 400, "Hello", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    
    // make the windows conetxt current
    glfwMakeContextCurrent(window);
    
    // loop until user closes the window
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
        //Render the opengl, put all your opengl code here
        
        
        // swap front and back buffers
        glfwSwapBuffers( window );
        
        // pool for and process events
        glfwPollEvents();
    }
    
    glfwTerminate();
    
    return 0;
}
