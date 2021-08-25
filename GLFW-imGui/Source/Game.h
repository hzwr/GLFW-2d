#pragma once
#include <memory>
#include "imgui.h"

class Game
{
public:
	~Game();
	bool Init();
	void RunMainLoop();
private:
	void Update();

	struct GLFWwindow *m_window = nullptr;
	struct ImGuiContext *m_imGuiContext = nullptr;

	// imgui state
	bool show_demo_window = true;
	bool show_another_window = false;
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
};