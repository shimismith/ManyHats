#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class GameStateManager
{
public:
	GameStateManager();
	~GameStateManager();

	// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
	// ---------------------------------------------------------------------------------------------------------
	void processInput(GLFWwindow *window)
	{
		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
			glfwSetWindowShouldClose(window, true);
	}

};

