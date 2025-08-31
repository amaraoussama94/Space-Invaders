/**
 * @file GameObjectBlueprint.hpp
 * @brief This file contains the declaration of the GameObjectBlueprint class.
 * The GameObjectBlueprint class is used to define the blueprint of a game object,
 * including its name, components, bitmap, dimensions, location, speed, and collider properties.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include<vector>
#include<string>
#include<map>

using namespace std;

class GameObjectBlueprint {

private:
	string m_Name = "";
	vector<string> m_ComponentList;
	string m_BitmapName = "";
	float m_Width;
	float m_Height;
	float m_LocationX;
	float m_LocationY;
	float m_Speed;
	bool m_EncompassingRectCollider = false;
	string m_EncompassingRectColliderLabel = "";

public:
	float getWidth();
	void setWidth(float width);
	float getHeight();
	void setHeight(float height);
	float getLocationX();
	void setLocationX(float locationX);
	float getLocationY();
	void setLocationY(float locationY);
	void setName(string name);
	string getName();
	vector<string>& getComponentList();
	void addToComponentList(string newComponent);
	string getBitmapName();
	void setBitmapName(string bitmapName);
	string getEncompassingRectColliderLabel();
	bool getEncompassingRectCollider();
	void setEncompassingRectCollider(string label);
};

