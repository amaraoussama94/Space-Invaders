/**
 * @file Screen.hpp
 * @brief This file contains the declaration of the Screen class.
 * The Screen class serves as a base class for different screens
 * in the application, providing functionality for initialization,
 * updating, drawing, and handling input events.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "InputHandler.hpp"
#include "UIPanel.hpp"
#include "ScreenManagerRemoteControl.hpp"

class InputHandler;

class Screen {
private:
	vector<shared_ptr<InputHandler>> m_InputHandlers;//This is where we will store all the derived InputHandler instances<
	vector<unique_ptr<UIPanel>> m_Panels;

protected:
	void addPanel(unique_ptr<UIPanel> p,
		ScreenManagerRemoteControl* smrc,
		shared_ptr<InputHandler> ih);

public:
	virtual void initialise();
	void virtual update(float fps);
	void virtual draw(RenderWindow& window);
	void handleInput(RenderWindow& window);

	View m_View;
};