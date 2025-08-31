/**
 * @file StandardGraphicsComponent.hpp
 * @brief This file contains the declaration of the StandardGraphicsComponent class.
 * The StandardGraphicsComponent class is a derived class of GraphicsComponent that represents
 * a standard graphics component for rendering a sprite in the game.
 * It provides functionality to initialize the graphics with a bitmap and draw the sprite
 * on the render window.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "Component.hpp"
#include "GraphicsComponent.hpp"
#include <string>
class Component;
class StandardGraphicsComponent : public GraphicsComponent 
{
private:
    //It doesn't need a Texture instance because that
    // will be obtained each frame from the BitmapStoreclass.
    sf::Sprite m_Sprite;
    string m_SpecificType = "standard";
public:
    /****************************************************
    *****************************************************
    From Component interface base class
    *****************************************************
    *****************************************************/
    string getSpecificType() override
    {
        return m_SpecificType;
    }
    void start(GameObjectSharer* gos, GameObject* self) override
    {
    }
    /****************************************************
    *****************************************************
    From GraphicsComponent
    *****************************************************
    *****************************************************/
    void draw(RenderWindow& window,shared_ptr<TransformComponent> t) override;
    void initializeGraphics(string bitmapName,Vector2f objectSize) override;
};