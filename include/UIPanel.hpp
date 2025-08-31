/**
 * @file UIPanel.hpp
 * @brief This file contains the declaration of the UIPanel class.	
 * The UIPanel class represents a user interface panel that can contain buttons and manage its visibility.
 * It provides functionality to add buttons, show or hide the panel, and draw it on a
 * render window.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <memory>// for shared pointer elkse  you will get error  unique pointer doest need it 
#include <SFML/Graphics.hpp>

#include "Button.hpp"

using namespace std;

class UIPanel {
private:
	RectangleShape m_UIPanel;
	bool m_Hidden = false;
	vector<shared_ptr<Button>> m_Buttons;

protected:
	float m_ButtonWidth = 0;
	float m_ButtonHeight = 0;
	float m_ButtonPadding = 0;

	Font m_Font;
	Text m_Text;

	void addButton(float x, float y, int width, int height,
		int red, int green, int blue,
		string label);

public:
	View m_View;

	UIPanel(Vector2i res, int x, int y,
		float width, float height,
		int alpha, int red, int green, int blue);

	vector<shared_ptr<Button>> getButtons();
	virtual void draw(RenderWindow& window);
	void show();
	void hide();
};