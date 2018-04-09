#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;



int main(int argc, char** argv)
{

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "learn_open_gl", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "faild to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	while (true)
	{

	}
}