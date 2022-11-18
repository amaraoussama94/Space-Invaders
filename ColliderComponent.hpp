 #pragma once
#include "Component.hpp"
#include <iostream>
class ColliderComponent : public Component
{
private:
string m_Type = "collider";
bool m_Enabled = false;
public:
/****************************************************
*****************************************************
From Component interface
*****************************************************
*****************************************************/
virtual  string Component::getType() 
{
return m_Type;
}
virtual void Component::disableComponent() 
{
m_Enabled = false;
}
virtual void Component::enableComponent()
 {
m_Enabled = true;
}
virtual bool Component::enabled() 
{
return m_Enabled;
}
virtual void Component::start(GameObjectSharer* gos, GameObject* self)
{
}
};