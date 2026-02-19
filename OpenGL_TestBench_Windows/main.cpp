#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <color_list.h>


void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void clearScreen();
void quitOnKey(GLFWwindow* window);
void setDisplayColorOnKey(GLFWwindow* window);

int main()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X

	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Test Bench", NULL, NULL);
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

	glViewport(0, 0, 800, 600);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	while (!glfwWindowShouldClose(window))
	{
		// clear screen
		//clearScreen();
		// input
		quitOnKey(window);
		setDisplayColorOnKey(window);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) // glfw: whenever the window size changed (by OS or user resize) this callback function executes
{
	glViewport(0, 0, width, height);
}

void clearScreen() // render loop
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}

void quitOnKey(GLFWwindow* window) // process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}

void setDisplayColorOnKey(GLFWwindow *window)
{
	if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS)
	{
		//glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
		glClearColor(COLOR(BLUE));
		glClear(GL_COLOR_BUFFER_BIT);
	}
}