/**
 * @file ScreenManagerRemoteControl.hpp
 * @brief This file contains the declaration of the ScreenManagerRemoteControl class.
 * The ScreenManagerRemoteControl class provides an interface for managing screen transitions
 * and sharing game objects within the application.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <string>
#include <vector>
#include "GameObject.hpp"
#include "GameObjectSharer.hpp"
#include <memory>//for shared pointer
using namespace std;

class ScreenManagerRemoteControl
{
public:
	virtual void SwitchScreens(string screenToSwitchTo) = 0;
	virtual void loadLevelInPlayMode(string screenToLoad) = 0;
	virtual vector<GameObject>& getGameObjects() = 0;
	virtual GameObjectSharer& shareGameObjectSharer() = 0;
};
