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
virtual  string getType() 
{
return m_Type;
}
virtual void disableComponent() 
{
m_Enabled = false;
}
virtual void enableComponent()
 {
m_Enabled = true;
}
virtual bool enabled() 
{
return m_Enabled;
}
virtual void  start(GameObjectSharer* gos, GameObject* self)
{
}
};