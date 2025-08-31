/**
 * @file WorldState.hpp
 * @brief This file contains the declaration of the WorldState class.
 * The WorldState class holds static variables that represent
 * the state of the game world, such as dimensions, score,
 * lives, and wave information.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
class WorldState
{
public:
	static const int WORLD_WIDTH = 100;
	static int WORLD_HEIGHT;
	static int SCORE;
	static int LIVES;
	static int NUM_INVADERS_AT_START;
	static int NUM_INVADERS;
	static int WAVE_NUMBER;
};