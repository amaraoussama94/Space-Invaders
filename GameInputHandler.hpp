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
