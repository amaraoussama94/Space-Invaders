/**
 * @file Button.hpp
 * @brief This file contains the declaration of the Button class.
 * The Button class is responsible for creating and managing
 * a clickable button with text in a graphical user interface.
 * It provides functionality to draw the button and handle its appearance.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Button
{
private:
	RectangleShape m_Button;
	Text m_ButtonText;
	Font m_Font;

public:
	std::string m_Text;
	FloatRect m_Collider;

	Button(Vector2f position,
		float width, float height,
		int red, int green, int blue,
		std::string text);

	void draw(RenderWindow& window);
};