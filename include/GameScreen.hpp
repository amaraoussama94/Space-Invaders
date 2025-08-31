/**
 * @file GameScreen.hpp
 * @brief This file contains the declaration of the GameScreen class.
 * The GameScreen class is a derived class of Screen and BulletSpawner,
 * representing the main game screen. It provides functionality to
 * initialize, update, and draw the game elements, as well as
 * spawn bullets for the player and invaders.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "Screen.hpp"
#include "GameInputHandler.hpp"
#include "GameOverInputHandler.hpp"
#include "BulletSpawner.hpp"
#include "PhysicsEnginePlayMode.hpp"

class GameScreen : public Screen, public BulletSpawner
{
private:
	ScreenManagerRemoteControl* m_ScreenManagerRemoteControl;
	shared_ptr<GameInputHandler> m_GIH;
	PhysicsEnginePlayMode m_PhysicsEnginePlayMode;

	int m_NumberInvadersInWorldFile = 0;
//  bullet thing 
	vector<int> m_BulletObjectLocations;
	int m_NextBullet = 0;
	bool m_WaitingToSpawnBulletForPlayer = false;
	bool m_WaitingToSpawnBulletForInvader = false;
	Vector2f m_PlayerBulletSpawnLocation;
	Vector2f m_InvaderBulletSpawnLocation;
	Clock m_BulletClock;

	Texture m_BackgroundTexture;
	Sprite m_BackgroundSprite;
public:
	static bool m_GameOver;

	GameScreen(ScreenManagerRemoteControl* smrc, Vector2i res);
	void initialise() override;
	void virtual update(float fps);
	void virtual draw(RenderWindow& window);
//  bullet thing 
	BulletSpawner* getBulletSpawner();

	/****************************************************
	*****************************************************
	From BulletSpawner interface
	*****************************************************
	*****************************************************/

	void  spawnBullet(Vector2f spawnLocation, bool forPlayer)
	{/*he if block executes if a bullet is requested for the player and the else block
	executes if a bullet is requested for an invader*/
		if (forPlayer)
		{
			Time elapsedTime = m_BulletClock.getElapsedTime();
			if (elapsedTime.asMilliseconds() > 500) {
				m_PlayerBulletSpawnLocation.x = spawnLocation.x;
				m_PlayerBulletSpawnLocation.y = spawnLocation.y;
				m_WaitingToSpawnBulletForPlayer = true;
				m_BulletClock.restart();
			}
		}
		else
		{
			m_InvaderBulletSpawnLocation.x = spawnLocation.x;
			m_InvaderBulletSpawnLocation.y = spawnLocation.y;
			m_WaitingToSpawnBulletForInvader = true;
		}
	}
};
