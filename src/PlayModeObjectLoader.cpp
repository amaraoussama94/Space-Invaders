/**
 * @file PlayModeObjectLoader.cpp
 * @brief Implementation of the PlayModeObjectLoader class.
 * This class is responsible for loading game objects for play mode
 * from a specified file path. It utilizes the BlueprintObjectParser
 * to parse game object blueprints and the GameObjectFactoryPlayMode
 * to build game objects based on the parsed blueprints.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#include "PlayModeObjectLoader.hpp"
#include "ObjectTags.hpp"
#include <iostream>
#include <fstream>

void PlayModeObjectLoader::
loadGameObjectsForPlayMode(
	string pathToFile, vector<GameObject>& gameObjects)
{
	ifstream reader(pathToFile);
	string lineFromFile;

	float x = 0, y = 0, width = 0, height = 0;
	string value = "";
	while (getline(reader, lineFromFile)) {
		if (lineFromFile.find(
			ObjectTags::START_OF_OBJECT) != string::npos) {

			GameObjectBlueprint bp;
			m_BOP.parseNextObjectForBlueprint(reader, bp);
			m_GameObjectFactoryPlayMode.buildGameObject(
				bp, gameObjects);
		}
	}
}

