/**
 * @file GameOverUIPanel.hpp
 * @brief This file contains the declaration of the GameOverUIPanel class.
 * The GameOverUIPanel class is a derived class of UIPanel,
 * representing the user interface panel displayed when the game is over.
 * It provides functionality to initialize and draw the game over panel.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "UIPanel.hpp"
class GameOverUIPanel :
	public UIPanel
{
private:
	void initialiseButtons();

public:
	GameOverUIPanel(Vector2i res);
	void virtual draw(RenderWindow& window);
};