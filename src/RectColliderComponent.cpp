/**
 * @file RectColliderComponent.cpp
 * @brief Implementation of the RectColliderComponent class.
 * This class represents a rectangular collider component for game objects,
 * providing functionality to manage and manipulate rectangular collision areas.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#include "RectColliderComponent.hpp"

RectColliderComponent::RectColliderComponent(string name) {
	m_Tag = "" + name;
}

string RectColliderComponent::getColliderTag() {
	return m_Tag;
}

void RectColliderComponent::setOrMoveCollider(
	float x, float y, float width, float height) {

	m_Collider.left = x;
	m_Collider.top = y;
	m_Collider.width = width;
	m_Collider.height = height;
}

FloatRect& RectColliderComponent::getColliderRectF() {
	return m_Collider;
}