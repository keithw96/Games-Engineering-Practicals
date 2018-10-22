#pragma once

#include "Entity.h"
#include <iostream>

class ControlSystem
{
	std::vector<Entity> entities;

public:

	void addEntity(Entity e) { ; }
	void update() {
		std::cout << "Control System" << std::endl;
	}
};