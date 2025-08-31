/**
 * @file InputHandler.hpp
 * @brief This file contains the declaration of the InputHandler class.
 * The InputHandler class is responsible for managing user input events
 * such as keyboard and mouse interactions within the application.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Button.hpp"
#include "Screen.hpp"
#include "ScreenManagerRemoteControl.hpp"

using namespace sf;
using namespace std;

class Screen;

class InputHandler
{
private:
	Screen* m_ParentScreen;
	vector<shared_ptr<Button>> m_Buttons;
	View* m_PointerToUIPanelView;
	ScreenManagerRemoteControl* m_ScreenManagerRemoteControl;

public:
	void initialiseInputHandler(
		ScreenManagerRemoteControl* sw,
		vector<shared_ptr<Button>>,
		View* pointerToUIView,
		Screen* parentScreen);

	void handleInput(RenderWindow& window, Event& event);

	virtual void handleGamepad();
	virtual void handleKeyPressed(Event& event,
		RenderWindow& window);

	virtual void handleKeyReleased(Event& event,
		RenderWindow& window);

	virtual void handleLeftClick(string& buttonInteractedWith,
		RenderWindow& window);

	View* getPointerToUIView();
	ScreenManagerRemoteControl*
		getPointerToScreenManagerRemoteControl();

	Screen* getmParentScreen();
};