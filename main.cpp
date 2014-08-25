//Includes all opengl headers too.
#include <GLFW/glfw3.h>

//Includes all cout functions, i.e. std::cout.
#include <iostream>

//Glfw error function, all errors will be notified by this function.
void error_callback(int error, const char* description) {
    std::cout << "Error code: " << error  << " - " << description << std::endl;
}

int main(int argc, char** argv) {
	//Installs a callback function for glfw errors, if any error occurs the function will be called.
	glfwSetErrorCallback(error_callback);

	//Initializes the glfw framework, this function must be called.
	if (!glfwInit()) {
	    std::cout << "Error glfwInit" << std::endl;
		return 1;
	}

	//Creates a window with the opengl context
	GLFWwindow* window = glfwCreateWindow(800, 600, "Hello World!", NULL, NULL);
	if (!window) {
	    std::cout << "Error glfwCreateWindow" << std::endl;
	    glfwTerminate();
	    return 1;
	}
	//Sets this window as the current render context, after call this function the opengl functions will be enabled.
	glfwMakeContextCurrent(window);

	//Main loop, checks if the window still alive
	while (!glfwWindowShouldClose(window)) {
        //Process all the events, inputs, window resize, etc.
		glfwPollEvents();
		
		//Sends the back buffer to render.
        glfwSwapBuffers(window);
	}

	//Frees resources associates with the window.
	glfwDestroyWindow(window);
	
	//Frees all resources used by glfw framework.
	glfwTerminate();
	
	//Everything ended ok.
	return 0;
}
