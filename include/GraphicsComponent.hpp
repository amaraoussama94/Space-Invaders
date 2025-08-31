#pragma once
#include "Component.hpp"
#include "TransformComponent.hpp"
#include <string>
#include <SFML/Graphics.hpp>
#include "GameObjectSharer.hpp"
#include <iostream>

using namespace sf;
using namespace std;

class GraphicsComponent : public Component {
private:
	string m_Type = "graphics";
	bool m_Enabled = false;

public:
//shared_ptr :vital data such as position and scale can be accessed each frame of the game
	virtual void draw(
		RenderWindow& window,
		shared_ptr<TransformComponent> t) = 0;

	virtual void initializeGraphics(
		string bitmapName,
		Vector2f objectSize) = 0;

	/****************************************************
	*****************************************************
	From Component interface
	*****************************************************
	*****************************************************/

	string getType() {
		return m_Type;
	}

	void disableComponent() {
		m_Enabled = false;
	}

	void enableComponent() {
		m_Enabled = true;
	}

	bool enabled() {
		return m_Enabled;
	}

	void start(
		GameObjectSharer* gos, GameObject* self) {}

};