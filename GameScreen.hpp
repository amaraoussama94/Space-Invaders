#pragma once
#include "Screen.hpp"
#include "GameInputHandler.hpp"
#include "GameUIPanel.hpp"
#include "GameOverInputHandler.hpp"
#include "GameOverUIPanel.hpp"
#include "WorldState.hpp"
#include "BulletSpawner.hpp"
class GameScreen : public Screen, public BulletSpawner /	void  spawnBullet(Vector2f spawnLocation,bool forPlayer)
	{
		if (forPlayer)
		{
			Time elapsedTime = m_BulletClock.getElapsedTime();
			if (elapsedTime.asMilliseconds() > 500) 
			{
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
	}/yeah weird thing it just multi inherentis thing 
{
private:
    ScreenManagerRemoteControl* m_ScreenManagerRemoteControl;
	shared_ptr<GameInputHandler> m_GIH;
    
    Texture m_BackgroundTexture;
	Sprite m_BackgroundSprite;
	int m_NumberInvadersInWorldFile = 0;
	/// @brief bullet thing 
	vector<int> m_BulletObjectLocations;
	int m_NextBullet = 0;
	bool m_WaitingToSpawnBulletForPlayer = false;
	bool m_WaitingToSpawnBulletForInvader = false;
	Vector2f m_PlayerBulletSpawnLocation;
	Vector2f m_InvaderBulletSpawnLocation;
	Clock m_BulletClock;
public:
    static bool m_GameOver;

	GameScreen(ScreenManagerRemoteControl* smrc, Vector2i res);
	void initialise() override;
	void virtual update(float fps);
	void virtual draw(RenderWindow& window);
	/// @brief bullrt thing
	BulletSpawner* getBulletSpawner();
	/****************************************************
*****************************************************
From BulletSpawner interface
*****************************************************
*****************************************************/
	void  spawnBullet(Vector2f spawnLocation,bool forPlayer)
	{
		/*he if block executes if a bullet is requested for the player and the else block
		executes if a bullet is requested for an invader*/
		if (forPlayer)
		{
			Time elapsedTime = m_BulletClock.getElapsedTime();
			if (elapsedTime.asMilliseconds() > 500) //0.5s
			{
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