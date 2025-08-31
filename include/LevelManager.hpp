/**
 * @file LevelManager.hpp
 * @brief This file contains the declaration of the LevelManager class.
 * The LevelManager class is responsible for managing game objects
 * within a level, including loading, activating, and providing access
 * to game objects. It implements the GameObjectSharer interface
 * to share game objects with other components.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "GameObject.hpp"
#include <vector>
#include <string>
#include "GameObjectSharer.hpp"

using namespace std;

class LevelManager : public GameObjectSharer {
private:
	vector<GameObject> m_GameObjects;

	const std::string WORLD_FOLDER = "world";
	const std::string SLASH = "/";

	void runStartPhase();
	void activateAllGameObjects();

public:
	vector<GameObject>& getGameObjects();
	void loadGameObjectsForPlayMode(string screenToLoad);

	/****************************************************
	*****************************************************
	From GameObjectSharer interface
	*****************************************************
	*****************************************************/

	vector<GameObject>& getGameObjectsWithGOS()
	{
		return m_GameObjects;
	}

	GameObject& findFirstObjectWithTag(string tag)
	{
		auto it = m_GameObjects.begin();
		auto end = m_GameObjects.end();
		for (it;
			it != end;
			++it)
		{
			if ((*it).getTag() == tag)
			{
				return (*it);
			}
		}

#ifdef debuggingErrors		
		cout <<
			"LevelManager.h findFirstGameObjectWithTag() "
			<< "- TAG NOT FOUND ERROR!"
			<< endl;
#endif	
		return m_GameObjects[0];
	}
};