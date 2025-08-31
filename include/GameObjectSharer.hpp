/**
 * @file GameObjectSharer.hpp
 * @brief This file contains the declaration of the GameObjectSharer class.
 * The GameObjectSharer class is an abstract interface that provides methods
 * to share and access game objects within the game engine.
 * It allows retrieval of game objects and finding specific objects by tag.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include<vector>
#include<string>

class GameObject;
class GameObjectSharer {
public:
	virtual std::vector<GameObject>& getGameObjectsWithGOS() = 0;
	virtual GameObject& findFirstObjectWithTag(std::string tag) = 0;
};