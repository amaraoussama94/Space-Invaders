#pragma once
#include "InputHandler.hpp"
class GameScreen;

class GameInputHandler : public InputHandler
{
public:
    void initialize();
    void handleGamepad() override;
    void handleKeyPressed(Event& event,RenderWindow& window) override;
    void handleKeyReleased(Event& event,RenderWindow& window) override;
};