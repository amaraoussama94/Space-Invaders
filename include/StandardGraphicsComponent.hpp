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