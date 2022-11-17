#pragma once
#include "InputHandler.hpp"
#include "SoundEngine.hpp"
#include "WorldState.hpp"
#include <iostream>
class GameOverInputHandler :public InputHandler
{
public:
    void handleKeyPressed(Event& event,RenderWindow& window) override;
    void handleLeftClick(std::string&buttonInteractedWith, RenderWindow& window) override;
};