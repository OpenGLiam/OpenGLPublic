#include <iostream> 
#include "glad.h"
#include <GLFW/glfw3.h>
int main (int, char**){
    GLFWwindow* window; 
    if(!glfwInit()){
        return -1;
    }
    
    window = glfwCreateWindow(690, 480, "Hello Window", NULL, NULL);

    while(!glfwWindowShouldClose(window)){
        glfwPollEvents(); 
        glfwSwapBuffers(window); 

    }
    glfwTerminate();
    return 0;
}