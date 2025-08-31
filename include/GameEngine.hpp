/**
 * @file GameEngine.hpp
 * @brief This file contains the declaration of the GameEngine class.
 * The GameEngine class is responsible for managing the main game loop,
 * handling input, updating game state, and rendering graphics. It serves
 * 	as the core of the game application.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <SFML/Graphics.hpp>
#include "ScreenManager.hpp"
#include "SoundEngine.hpp"

using namespace sf;

class GameEngine {
private:
	Clock m_Clock;
	Time m_DT;
	RenderWindow m_Window;

	unique_ptr<ScreenManager> m_ScreenManager;//unique pointer of the ScreenManager Type

	float m_FPS = 0;
	Vector2f m_Resolution;//Screen Resolution

	void handleInput();
	void update();
	void draw();

public:
	SoundEngine m_SoundEngine;

	GameEngine();
	void run();
};