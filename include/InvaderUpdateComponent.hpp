/**
 * @file InvaderUpdateComponent.hpp
 * @brief This file contains the declaration of the InvaderUpdateComponent class.
 * The InvaderUpdateComponent class is responsible for managing the behavior
 * of invader game objects, including movement and shooting mechanics.
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

class BulletSpawner;

class InvaderUpdateComponent : public UpdateComponent
{
private:
	string m_SpecificType = "invader";
//  so that the invader can move
	shared_ptr<TransformComponent> m_TC;
	//update its location and be collided with
	shared_ptr < RectColliderComponent> m_RCC;
	//query the position of the player and 
    //make decisions about when to shoot bullets
	shared_ptr < TransformComponent> m_PlayerTC;
	shared_ptr < RectColliderComponent> m_PlayerRCC;

	BulletSpawner* m_BulletSpawner;

	float m_Speed = 10.0f;
	bool m_MovingRight = true;
	float m_TimeSinceLastShot;
	float m_TimeBetweenShots = 5.0f;
	float m_AccuracyModifier;
	float m_SpeedModifier = 0.05;
	int m_RandSeed;

public:
	void dropDownAndReverse();
	bool isMovingRight();
	void initializeBulletSpawner(BulletSpawner*
		bulletSpawner, int randSeed);

	/****************************************************
	*****************************************************
	From Component interface base class
	*****************************************************
	*****************************************************/

	string  getSpecificType() {
		return m_SpecificType;
	}

	void  start(GameObjectSharer* gos,
		GameObject* self) {

		// Where is the player?
		m_PlayerTC = static_pointer_cast<TransformComponent>(
			gos->findFirstObjectWithTag("Player")
			.getComponentByTypeAndSpecificType(
				"transform", "transform"));

		m_PlayerRCC = static_pointer_cast<RectColliderComponent>(
			gos->findFirstObjectWithTag("Player")
			.getComponentByTypeAndSpecificType(
				"collider", "rect"));

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

