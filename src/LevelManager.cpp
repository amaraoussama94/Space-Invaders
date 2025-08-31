/**
 * @file LevelManager.cpp
 * @brief Implementation of the LevelManager class.
 * This class is responsible for managing game levels,
 * including loading game objects for play mode,
 * running the start phase, and activating game objects.
 * It also implements the GameObjectSharer interface to share
 * game objects with other components.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#include "LevelManager.hpp"
#include "PlayModeObjectLoader.hpp"
#include <iostream>

void LevelManager::
loadGameObjectsForPlayMode(string screenToLoad)
{
	m_GameObjects.clear();
	string levelToLoad = ""
		+ WORLD_FOLDER + SLASH + screenToLoad;

	PlayModeObjectLoader pmol;
	pmol.loadGameObjectsForPlayMode(
		levelToLoad, m_GameObjects);

	runStartPhase();
}

vector<GameObject>& LevelManager::getGameObjects()
{
	return m_GameObjects;
}

void LevelManager::runStartPhase()
{
	auto it = m_GameObjects.begin();
	auto end = m_GameObjects.end();
	for (it;
		it != end;
		++it)
	{
		(*it).start(this);
	}

	activateAllGameObjects();
}

void LevelManager::activateAllGameObjects()
{
	auto it = m_GameObjects.begin();
	auto end = m_GameObjects.end();
	for (it;
		it != end;
		++it)
	{
		(*it).setActive();
	}
}