/**
 * @file SelectUIPanel.hpp
 * @brief This file contains the declaration of the SelectUIPanel class.
 * The SelectUIPanel class is responsible for managing the user interface panel
 * in the selection screen of the application. It provides functionality to display
 * and interact with UI elements such as buttons.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "UIPanel.hpp"
class SelectUIPanel : public UIPanel
{
private:
	void initialiseButtons();

public:
	SelectUIPanel(Vector2i res);
	void virtual draw(RenderWindow& window);
};