/**
 * @file BulletSpawner.hpp
 * @brief This file contains the declaration of the BulletSpawner interface.
 * The BulletSpawner interface defines a contract for spawning bullet objects
 * in the game. Any class that implements this interface must provide an
 * implementation for the spawnBullet method, which is responsible for
 * creating and initializing bullet objects at a specified location.
 * @version 1.0
 * @date 2025-08-31
 * @author Oussama Amara
 */
#include <SFML/Graphics.hpp>

class BulletSpawner
{
public:
	virtual void spawnBullet(
		sf::Vector2f spawnLocation, bool forPlayer) = 0;
};