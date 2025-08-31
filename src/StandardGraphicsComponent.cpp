/**
 * @file StandardGraphicsComponent.cpp
 * @brief Implementation of the StandardGraphicsComponent class.
 * This class handles the graphical representation of game objects
 * using standard bitmap images.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
*/

#include "StandardGraphicsComponent.hpp"
#include "BitmapStore.hpp"
#include <iostream>

void StandardGraphicsComponent::initializeGraphics(
	string bitmapName,
	Vector2f objectSize)
{
	BitmapStore::addBitmap("graphics/" + bitmapName + ".png");
	m_Sprite.setTexture(BitmapStore::getBitmap(
		"graphics/" + bitmapName + ".png"));

	auto textureSize = m_Sprite.getTexture()->getSize();
	m_Sprite.setScale(float(objectSize.x) / textureSize.x,
		float(objectSize.y) / textureSize.y);
	m_Sprite.setColor(sf::Color(0, 255, 0));
}

void StandardGraphicsComponent::draw(
	RenderWindow& window,
	shared_ptr<TransformComponent> t)
{
	m_Sprite.setPosition(t->getLocation());
	window.draw(m_Sprite);
}