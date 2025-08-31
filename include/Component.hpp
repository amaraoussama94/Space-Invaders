/**
 * @file Component.hpp
 * @brief This file contains the declaration of the Component class.
 * The Component class serves as the base class for all components
 * in the game object system. It defines the interface that all
 * derived component classes must implement.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
/******************This is the base class of every component in every game object.***********************/
#pragma once
#include "GameObjectSharer.hpp"
#include <string>
#include<memory> //used  for shared pointer
using namespace std;

class GameObject;

class Component {
public:
	virtual string getType() = 0;
	virtual string getSpecificType() = 0;
	virtual void disableComponent() = 0;
	virtual void enableComponent() = 0;
	virtual bool enabled() = 0;
	virtual void start(GameObjectSharer* gos, GameObject* self) = 0;
};
