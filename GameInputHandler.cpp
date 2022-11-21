#include "GameInputHandler.hpp"
#include "SoundEngine.hpp"
#include "GameScreen.hpp"

class BulletSpawner;

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
    if (event.key.code == Keyboard::Left)
    {
        m_PUC->moveLeft();
    }
    if (event.key.code == Keyboard::Right)
    {
        m_PUC->moveRight();
    }
    if (event.key.code == Keyboard::Up)
    {
        m_PUC->moveUp();
    }
    if (event.key.code == Keyboard::Down)
    {
        m_PUC->moveDown();
    }
}
void GameInputHandler::handleKeyReleased(Event& event, RenderWindow& window)
{
}