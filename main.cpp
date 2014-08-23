#include <GLFW/glfw3.h>
#include <iostream>

void error_callback(int error, const char* description) {
    std::cout << description << std::endl;
}

int main(int argc, char** argv) {
	glfwSetErrorCallback(error_callback);

	if (!glfwInit()) {
	    std::cout << "Error glfwInit" << std::endl;
		return 1;
	}

	GLFWwindow* window = glfwCreateWindow(800, 600, "Hello World!", NULL, NULL);
	if (!window) {
	    std::cout << "Error glfwCreateWindow" << std::endl;
	    glfwTerminate();
	    return 1;
	}
	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        glfwSwapBuffers(window);
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
