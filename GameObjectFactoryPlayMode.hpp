#pragma once
#include "GameObjectBlueprint.hpp"
#include "GameObject.hpp"
#include <vector>
class GameObjectFactoryPlayMode 
{
public:
    void buildGameObject(GameObjectBlueprint& bp,std::vector <GameObject>& gameObjects);
};