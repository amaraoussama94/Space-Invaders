/**
 * @file RectColliderComponent.hpp
 * @brief This file contains the declaration of the RectColliderComponent class.
 * The RectColliderComponent class represents a rectangular collider component
 * used for collision detection in game objects.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "ColliderComponent.hpp"
#include <SFML/Graphics.hpp>

using namespace sf;

class RectColliderComponent : public ColliderComponent
{
private:
	string m_SpecificType = "rect";
	FloatRect m_Collider;
	string m_Tag = "";
public:
	RectColliderComponent(string name);
	string getColliderTag();
	void setOrMoveCollider(
		float x, float y, float width, float height);

	FloatRect& getColliderRectF();

	/****************************************************
	*****************************************************
	From Component interface base class
	*****************************************************
	*****************************************************/

	string getSpecificType() {
		return m_SpecificType;
	}

	void  start(
		GameObjectSharer* gos, GameObject* self) {}
};