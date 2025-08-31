/**
 * @file GameOverInputHandler.hpp
 * @brief This file contains the declaration of the GameOverInputHandler class.
 * The GameOverInputHandler class is a derived class of InputHandler,
 * specifically designed to handle user input on the Game Over screen.
 * It provides functionality to manage key presses and button clicks
 * relevant to the Game Over context.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "InputHandler.hpp"

class GameOverInputHandler :
	public InputHandler
{
public:
	void handleKeyPressed(Event& event,
		RenderWindow& window) override;

	void handleLeftClick(std::string&
		buttonInteractedWith, RenderWindow& window) override;
};
