/**
 * @file TransformComponent.hpp
 * @brief This file contains the declaration of the TransformComponent class.
 * The TransformComponent class represents the position and size of a game object in the game world.
 * It provides functionality to get and set the location and size of the game object.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "Component.hpp"
#include<SFML/Graphics.hpp>
using namespace sf;

class Component;

class TransformComponent : public Component 
{
private:
    const string m_Type = "transform";
    Vector2f m_Location;
    float m_Height;
    float m_Width;
public:
    TransformComponent(float width, float height, Vector2f location);
    Vector2f& getLocation();
    Vector2f getSize();
    /****************************************************
    *****************************************************
    From Component interface
    *****************************************************
    *****************************************************/
    string getType()
    {
        return m_Type;
    }

    string getSpecificType()
    {
        // Only one type of Transform so just return m_Type
        return m_Type;
    }
    void disableComponent()
    {}
    void enableComponent()
    {}
    bool enabled()
    {
        return false;
    }
    void start(GameObjectSharer* gos, GameObject* self)
    {}
};