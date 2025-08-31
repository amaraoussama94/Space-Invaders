/**
 * @file BulletUpdateComponent.hpp
 * @brief This file contains the declaration of the BulletUpdateComponent class.
 * The BulletUpdateComponent class is responsible for managing the behavior
 * of bullet objects in the game, including their movement and spawning logic.
 * It inherits from the UpdateComponent class and implements the update method
 * to define how bullets move each frame.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "UpdateComponent.hpp"
#include "TransformComponent.hpp"
#include "GameObjectSharer.hpp"
#include "RectColliderComponent.hpp"
#include "GameObject.hpp"

class BulletUpdateComponent : public UpdateComponent
{
private:
	string m_SpecificType = "bullet";

	shared_ptr<TransformComponent> m_TC;
	shared_ptr<RectColliderComponent> m_RCC;

	float m_Speed = 75.0f;

	int m_AlienBulletSpeedModifier;
	int m_ModifierRandomComponent = 5;
	int m_MinimumAdditionalModifier = 5;

	bool m_MovingUp = true;

public:
	bool m_BelongsToPlayer = false;
	bool m_IsSpawned = false;

	void spawnForPlayer(Vector2f spawnPosition);
	void spawnForInvader(Vector2f spawnPosition);
	void deSpawn();
	bool isMovingUp();

	/****************************************************
	*****************************************************
	From Component interface base class
	*****************************************************
	*****************************************************/

	string  getSpecificType() {
		return m_SpecificType;
	}

	void  start(
		GameObjectSharer* gos, GameObject* self) {
		// Where is this specific invader
		m_TC = static_pointer_cast<TransformComponent>(
			self->getComponentByTypeAndSpecificType(
				"transform", "transform"));

		m_RCC = static_pointer_cast<RectColliderComponent>(
			self->getComponentByTypeAndSpecificType(
				"collider", "rect"));
	}

	/****************************************************
	*****************************************************
	From UpdateComponent
	*****************************************************
	*****************************************************/

	void update(float fps) override;
};