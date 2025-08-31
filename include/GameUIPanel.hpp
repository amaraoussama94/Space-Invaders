/**
 * @file GameUIPanel.hpp
 * @brief This file contains the declaration of the GameUIPanel class.
 * The GameUIPanel class is a derived class of UIPanel, representing
 * the user interface panel for the game. It provides functionality
 * to initialize and draw the game UI elements.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "UIPanel.hpp"

class GameUIPanel : public UIPanel
{
public:
	GameUIPanel(Vector2i res);
	void draw(RenderWindow& window) override;
};