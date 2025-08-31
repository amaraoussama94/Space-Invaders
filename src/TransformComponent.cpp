/**
 * @file TransformComponent.cpp
 * @brief Implementation of the TransformComponent class.
 * This class represents the position and size of a game object in 2D space.
 * It provides methods to access and modify the object's location and dimensions.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#include "TransformComponent.hpp"

TransformComponent::TransformComponent(
	float width, float height, Vector2f location)
{
	m_Height = height;
	m_Width = width;
	m_Location = location;
}

Vector2f& TransformComponent::getLocation()
{
	return m_Location;
}

Vector2f TransformComponent::getSize()
{
	return Vector2f(m_Width, m_Height);
}