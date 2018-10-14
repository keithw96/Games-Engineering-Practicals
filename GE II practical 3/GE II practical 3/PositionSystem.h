#pragma once

#include "Entity.h"
#include <iostream>

class PositionSystem
{
	std::vector<Entity> entities;

public:

	void addEntity(Entity e) { /* TBI */ }
	void update() {
		std::cout << "PositionSystem Update" << std::endl;
	}

};