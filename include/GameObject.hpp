/**
 * @file GameObject.hpp
 * @brief This file contains the declaration of the GameObject class.
 * 
 * The GameObject class represents an entity in the game world that can have multiple components
 * such as graphics, update logic, and collision detection. It provides methods to manage its
 * components, update its state, and render itself on the screen.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include "Component.hpp"
#include "GraphicsComponent.hpp"
#include "GameObjectSharer.hpp"
#include "UpdateComponent.hpp"

class GameObject {
private:
	vector<shared_ptr<Component>> m_Components;

	string m_Tag;
	bool m_Active = false;
	int m_NumberUpdateComponents = 0;
	bool m_HasUpdateComponent = false;
	int m_FirstUpdateComponentLocation = -1;
	int m_GraphicsComponentLocation = -1;
	bool m_HasGraphicsComponent = false;
	int m_TransformComponentLocation = -1;
	int m_NumberRectColliderComponents = 0;
	int m_FirstRectColliderComponentLocation = -1;
	bool m_HasCollider = false;
	bool m_HasStateComponent = false;
	int m_StateComponentLocation = -1;

public:
	void update(float fps);
	void draw(RenderWindow& window);
	void addComponent(shared_ptr<Component> component);

	void setActive();
	void setInactive();
	bool isActive();
	void setTag(String tag);
	string getTag();

	void start(GameObjectSharer* gos);

	// Slow only use in init and start
	shared_ptr<Component> getComponentByTypeAndSpecificType(
		string type, string specificType);

	FloatRect& getEncompassingRectCollider();
	bool hasCollider();
	bool hasUpdateComponent();
	string getEncompassingRectColliderTag();

	shared_ptr<GraphicsComponent> getGraphicsComponent();
	shared_ptr<TransformComponent> getTransformComponent();
	shared_ptr<UpdateComponent> getFirstUpdateComponent();
};