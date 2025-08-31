/**
 * @file ObjectTags.cpp
 * @brief Implementation of the ObjectTags class.
 * This class defines constant string tags used for parsing game object
 * blueprints from a file.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 * 
 */
#include "DevelopState.hpp"
#include "ObjectTags.hpp"

const string ObjectTags::START_OF_OBJECT = "[START OBJECT]";
const string ObjectTags::END_OF_OBJECT = "[END OBJECT]";
const string ObjectTags::COMPONENT = "[COMPONENT]";
const string ObjectTags::COMPONENT_END = "[-COMPONENT]";
const string ObjectTags::NAME = "[NAME]";
const string ObjectTags::NAME_END = "[-NAME]";
const string ObjectTags::WIDTH = "[WIDTH]";
const string ObjectTags::WIDTH_END = "[-WIDTH]";
const string ObjectTags::HEIGHT = "[HEIGHT]";
const string ObjectTags::HEIGHT_END = "[-HEIGHT]";
const string ObjectTags::LOCATION_X = "[LOCATION X]";
const string ObjectTags::LOCATION_X_END = "[-LOCATION X]";
const string ObjectTags::LOCATION_Y = "[LOCATION Y]";
const string ObjectTags::LOCATION_Y_END = "[-LOCATION Y]";
const string ObjectTags::BITMAP_NAME = "[BITMAP NAME]";
const string ObjectTags::BITMAP_NAME_END = "[-BITMAP NAME]";
const string ObjectTags::ENCOMPASSING_RECT_COLLIDER =
"[ENCOMPASSING RECT COLLIDER]";

const string ObjectTags::ENCOMPASSING_RECT_COLLIDER_END
= "[-ENCOMPASSING_RECT COLLIDER]";