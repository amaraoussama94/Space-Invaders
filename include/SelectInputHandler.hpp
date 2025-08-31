/**
 * @file SelectInputHandler.hpp
 * @brief This file contains the declaration of the SelectInputHandler class.
 * The SelectInputHandler class is responsible for handling user input
 * events on the selection screen. It inherits from the InputHandler class
 * and overrides methods to process key presses and mouse clicks.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "InputHandler.hpp"

class SelectInputHandler : public InputHandler
{
public:
	void handleKeyPressed(Event& event,
		RenderWindow& window) override;

	void handleLeftClick(std::string& buttonInteractedWith,
		RenderWindow& window) override;
};