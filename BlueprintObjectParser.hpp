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