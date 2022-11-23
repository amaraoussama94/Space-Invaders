
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
