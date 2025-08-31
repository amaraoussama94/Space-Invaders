/**
 * @file PhysicsEnginePlayMode.hpp
 * @brief This file contains the declaration of the PhysicsEnginePlayMode class.
 * The PhysicsEnginePlayMode class is responsible for handling the physics
 * interactions and collision detection in the play mode of the game.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "GameObjectSharer.hpp"
#include "PlayerUpdateComponent.hpp"

class PhysicsEnginePlayMode
{
private:
	shared_ptr<PlayerUpdateComponent> m_PUC;

	GameObject* m_Player;
	bool m_InvaderHitWallThisFrame = false;
	bool m_InvaderHitWallPreviousFrame = false;
	bool m_NeedToDropDownAndReverse = false;
	bool m_CompletedDropDownAndReverse = false;


	void detectInvaderCollisions(
		vector<GameObject>& objects,
		const vector<int>& bulletPositions);

	void detectPlayerCollisionsAndInvaderDirection(
		vector<GameObject>& objects,
		const vector<int>& bulletPositions);

	void handleInvaderDirection();

public:
	void initilize(GameObjectSharer& gos);
	void detectCollisions(
		vector<GameObject>& objects,
		const vector<int>& bulletPositions);
};

