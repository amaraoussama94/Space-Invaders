/**
 * @file PlayModeObjectLoader.hpp
 * @brief This file contains the declaration of the PlayModeObjectLoader class.
 * The PlayModeObjectLoader class is responsible for loading game objects
 * from a specified file path for the play mode of the game.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <vector>
#include <string>
#include "GameObject.hpp"
#include "BlueprintObjectParser.hpp"
#include "GameObjectFactoryPlayMode.hpp"

using namespace std;

class PlayModeObjectLoader {
private:
	BlueprintObjectParser m_BOP;
	GameObjectFactoryPlayMode m_GameObjectFactoryPlayMode;

public:
	void loadGameObjectsForPlayMode(
		string pathToFile, vector<GameObject>& mGameObjects);
};