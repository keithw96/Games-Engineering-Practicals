#pragma once
 
#include "Component.h"

class PositionComponent : public Component
{
public: 
	PositionComponent() : posX(100), posY(100) {}

	int getPosX() { return posX; }
	int getPosY() { return posY; }

	void setPosition(int x, int y) { this->posX = x; this->posY = y; }
private:
	int posX;
	int posY;
};