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
#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>


int main(int argc, const char * argv[]) {

      glfwInit();
      glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
      glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
      glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
      //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
      return 0;
}
