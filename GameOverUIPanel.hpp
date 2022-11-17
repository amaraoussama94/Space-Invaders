#pragma once
#include "UIPanel.hpp"
class GameOverUIPanel :public UIPanel
{
private:
    void initialiseButtons();
public:
    GameOverUIPanel(Vector2i res);
    void virtual draw(RenderWindow& window);
};