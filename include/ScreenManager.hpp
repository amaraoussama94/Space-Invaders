/**
 * 	@file ScreenManager.hpp
 * 	@brief This file contains the declaration of the ScreenManager class.
 * The ScreenManager class is responsible for managing different screens
 * in the application, allowing for switching between them and handling
 * their updates and rendering.
 * 	@version 1.0
 * 	@date 2024-08-31
 * 	@author Oussama Amara
 */
#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include "GameScreen.hpp"
#include "ScreenManagerRemoteControl.hpp"
#include "SelectScreen.hpp"
#include "LevelManager.hpp"
#include "BitmapStore.hpp"
#include <iostream>

using namespace sf;
using namespace std;

class ScreenManager : public ScreenManagerRemoteControl
 {
private:
 //This will allow us to grab the functionality of a specific Screen
    //instance by using the corresponding string
	map <string, unique_ptr<Screen>> m_Screens;
	LevelManager m_LevelManager;

protected:
	string m_CurrentScreen = "Select";

public:
	BitmapStore m_BS;

	ScreenManager(Vector2i res);
	void update(float fps);
	void draw(RenderWindow& window);
	void handleInput(RenderWindow& window);

	/****************************************************
	*****************************************************
	From ScreenManagerRemoteControl interface
	*****************************************************
	*****************************************************/
	void SwitchScreens(string screenToSwitchTo)
	{
		m_CurrentScreen = "" + screenToSwitchTo;
		m_Screens[m_CurrentScreen]->initialise();
	}

	void  loadLevelInPlayMode(string screenToLoad)
	{
		m_LevelManager.getGameObjects().clear();
		m_LevelManager.
			loadGameObjectsForPlayMode(screenToLoad);
		SwitchScreens("Game");
	}

	vector<GameObject>& getGameObjects()
	{
		return m_LevelManager.getGameObjects();
	}

	GameObjectSharer& shareGameObjectSharer()
	{
		return m_LevelManager;
	}
};