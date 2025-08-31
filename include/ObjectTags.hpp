/**
 * @file ObjectTags.hpp
 * @brief This file contains the declaration of the ObjectTags class.
 * The ObjectTags class provides a collection of constant string tags
 * used for identifying various components and attributes of game objects.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#include <string>

using namespace std;

class ObjectTags {
public:
	static const string START_OF_OBJECT;
	static const string END_OF_OBJECT;
	static const string COMPONENT;
	static const string COMPONENT_END;
	static const string NAME;
	static const string NAME_END;
	static const string WIDTH;
	static const string WIDTH_END;
	static const string HEIGHT;
	static const string HEIGHT_END;
	static const string LOCATION_X;
	static const string LOCATION_X_END;
	static const string LOCATION_Y;
	static const string LOCATION_Y_END;
	static const string BITMAP_NAME;
	static const string BITMAP_NAME_END;
	static const string ENCOMPASSING_RECT_COLLIDER;
	static const string ENCOMPASSING_RECT_COLLIDER_END;
};