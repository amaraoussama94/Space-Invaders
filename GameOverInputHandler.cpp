#include "GameOverInputHandler.hpp"
#include "SoundEngine.hpp"
#include "WorldState.hpp"
#include <iostream>

void GameOverInputHandler::handleKeyPressed(Event& event,
	RenderWindow& window)
{
	if (event.key.code == Keyboard::Escape)
	{//if the Escape keyboard key is
        //pressed, the game switches to the select screen.
		SoundEngine::playClick();
		getPointerToScreenManagerRemoteControl()->
			SwitchScreens("Select");
	}
}

void GameOverInputHandler::handleLeftClick(
	std::string& buttonInteractedWith, RenderWindow& window)
{
	//If the Play button is clicked, a new game.
   	// is started by calling loadLevelInPlayMode,
	//while, if the Home button is clicked, then 
       //the select screen will be shown.
	if (buttonInteractedWith == "Play") {
		SoundEngine::playClick();
		WorldState::WAVE_NUMBER = 0;
		getPointerToScreenManagerRemoteControl()->
			loadLevelInPlayMode("level1");
	}

	else if (buttonInteractedWith == "Home") {
		SoundEngine::playClick();
		getPointerToScreenManagerRemoteControl()->
			SwitchScreens("Select");
	}
}