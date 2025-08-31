/**
 * @file BlueprintObjectParser.hpp
 * @brief This file contains the declaration of the BlueprintObjectParser class.
 * The BlueprintObjectParser class is responsible for parsing game object
 * 	blueprints from a file. It provides methods to extract relevant
 * information from the file and populate a GameObjectBlueprint instance.
 * @version 1.0
 * @date 2025-08-31
 * @author Oussama Amara
 */
#pragma once
#include "GameObjectBlueprint.hpp"
#include <string>

using namespace std;

class BlueprintObjectParser {
private:
 //will capture the content between two tags.
	string extractStringBetweenTags(
		string stringToSearch, string startTag, string endTag);

public:
	void parseNextObjectForBlueprint(
		ifstream& reader, GameObjectBlueprint& bp);
};