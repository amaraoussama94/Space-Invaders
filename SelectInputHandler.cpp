 #include "SelectInputHandler.hpp"
#include "SoundEngine.hpp"
#include "WorldState.hpp"
#include <iostream>

int WorldState::WAVE_NUMBER;

void SelectInputHandler::handleKeyPressed(Event& event, RenderWindow& window)
{
    // Quit the game
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        window.close();
    }
}

void SelectInputHandler::handleLeftClick(std::string& buttonInteractedWith, RenderWindow& window)
{
    if (buttonInteractedWith == "Play") 
    {
        SoundEngine::playClick();
        WorldState::WAVE_NUMBER = 0;
        getPointerToScreenManagerRemoteControl()->loadLevelInPlayMode("level1");
    }
    if (buttonInteractedWith == "Quit") 
    {
        SoundEngine::playClick();
        window.close();
    }
}