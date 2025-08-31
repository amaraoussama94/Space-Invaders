/**
 * @file GameObjectFactoryPlayMode.hpp
 * @brief This file contains the declaration of the GameObjectFactoryPlayMode class.
 * The GameObjectFactoryPlayMode class is responsible for creating game objects
 * based on provided blueprints. It constructs game objects by adding the necessary
 * components as defined in the blueprints and initializes them for use in the game.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "GameObjectBlueprint.hpp"
#include "GameObject.hpp"
#include <vector>

class GameObjectFactoryPlayMode {
public:
	void buildGameObject(GameObjectBlueprint& bp,
		std::vector <GameObject>& gameObjects);
};