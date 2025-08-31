/**
 * @file UpdateComponent.hpp
 * @brief This file contains the declaration of the UpdateComponent class.
 * The UpdateComponent class is an abstract base class for components that
 * require periodic updates. It inherits from the Component class and
 * provides an interface for updating game objects.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include "Component.hpp"

class UpdateComponent : public Component
{
private:
    string m_Type = "update";
    bool m_Enabled = false;
public:
    virtual void update(float fps) = 0;
    /****************************************************
    *****************************************************
    From Component interface
    *****************************************************
    *****************************************************/
    string getType() 
    {
        return m_Type;
    }
    void  disableComponent() 
    {
        m_Enabled = false;
    }
    void  enableComponent() 
    {
        m_Enabled = true;
    }
    bool  enabled() 
    {
        return m_Enabled;
    }
    void  start(GameObjectSharer* gos, GameObject* self) 
    {
    }
};