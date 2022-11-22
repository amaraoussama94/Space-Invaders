#include "ScreenManager.hpp"

ScreenManager::ScreenManager(Vector2i res)
{//adds two Screen instances to the map instance first, 
    //a GameScreen instance with a key of "Game" and then a SelectScreen
    //instance with a key of "Select"
	m_Screens["Game"] = unique_ptr<GameScreen>(
		new GameScreen(this, res));

	m_Screens["Select"] = unique_ptr<SelectScreen>(
		new SelectScreen(this, res));
}

void ScreenManager::handleInput(RenderWindow& window)
{
	m_Screens[m_CurrentScreen]->handleInput(window);
}

void ScreenManager::update(float fps)
{
	m_Screens[m_CurrentScreen]->update(fps);
}

void ScreenManager::draw(RenderWindow& window)
{
	m_Screens[m_CurrentScreen]->draw(window);
}