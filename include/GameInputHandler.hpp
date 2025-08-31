/**
 * @file GameInputHandler.hpp
 * @brief This file contains the declaration of the GameInputHandler class.
 * The GameInputHandler class is responsible for handling user input
 * specifically for the game screen, including keyboard and gamepad inputs.
 * It extends the InputHandler class and integrates with player-specific
 * components to manage player actions.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "InputHandler.hpp"
#include "PlayerUpdateComponent.hpp"
#include "TransformComponent.hpp"

class GameScreen;

class GameInputHandler : public InputHandler
{
private:
	shared_ptr<PlayerUpdateComponent> m_PUC;
	shared_ptr<TransformComponent> m_PTC;

	bool mBButtonPressed = false;

public:

	void initialize();
	void handleGamepad() override;
	void handleKeyPressed(Event& event,
		RenderWindow& window) override;

	void handleKeyReleased(Event& event,
		RenderWindow& window) override;
};
