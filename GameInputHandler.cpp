#include "GameInputHandler.hpp"
#include "SoundEngine.hpp"
#include "GameScreen.hpp"

void GameInputHandler::initialize() 
{

}
void GameInputHandler::handleGamepad()
{
}
void GameInputHandler::handleKeyPressed(Event& event, RenderWindow& window)
{
    // Handle key presses
    if (event.key.code == Keyboard::Escape)
    {
        //When the player presses the Escape key, 
        //the ScreenMangerRemoteControl pointer calls the
        //SwitchScreen function to go back to the select screen
        SoundEngine::playClick();
        getPointerToScreenManagerRemoteControl()->SwitchScreens("Select");
    }
}
void GameInputHandler::handleKeyReleased(Event& event, RenderWindow& window)
{
}