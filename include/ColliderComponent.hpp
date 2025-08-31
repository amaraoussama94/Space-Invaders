/**
 * @file ColliderComponent.hpp
 * @brief This file contains the declaration of the ColliderComponent class.
 * The ColliderComponent class is responsible for handling collision detection
 * for game objects. It inherits from the Component class and implements the
 * necessary methods for enabling, disabling, and managing the collider state.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "Component.hpp"
#include <iostream>

class ColliderComponent : public Component
{
private:
	string m_Type = "collider";
	bool m_Enabled = false;

public:

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

	void start(GameObjectSharer* gos, GameObject* self) {

	}
};

