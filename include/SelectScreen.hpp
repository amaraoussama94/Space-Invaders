/**
 * @file SelectScreen.hpp
 * @brief This file contains the declaration of the SelectScreen class.
 * The SelectScreen class represents the screen where players can select options
 * before starting the game. It inherits from the Screen class and manages
 * the display and interaction of the selection screen.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "Screen.hpp"

class SelectScreen : public Screen
{
private:
	ScreenManagerRemoteControl* m_ScreenManagerRemoteControl;

	Texture m_BackgroundTexture;
	Sprite m_BackgroundSprite;

public:
	SelectScreen(ScreenManagerRemoteControl* smrc, Vector2i res);
	void virtual draw(RenderWindow& window);
};