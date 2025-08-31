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