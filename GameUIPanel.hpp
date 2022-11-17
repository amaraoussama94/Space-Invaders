#pragma once
#include <sstream>

#include "UIPanel.hpp"
#include "WorldState.hpp"
class GameUIPanel : public UIPanel
{
public:
    GameUIPanel(Vector2i res);
    void draw(RenderWindow& window) override;
};