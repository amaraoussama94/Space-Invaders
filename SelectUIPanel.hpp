#pragma once
#include "UIPanel.hpp"

class SelectUIPanel : public UIPanel
{
private:
    void initialiseButtons();
public:
    SelectUIPanel(Vector2i res);
    void virtual draw(RenderWindow& window);
};