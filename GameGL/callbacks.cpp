#include <GLAD\glad.h>
#include <GLFW\glfw3.h>

void frambuffer_size_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}