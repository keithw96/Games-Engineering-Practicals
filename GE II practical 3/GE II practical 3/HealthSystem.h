#pragma once

#include "Entity.h"
#include <iostream>
class HealthSystem
{
	std::vector<Entity> entities;

public:

	void addEntity(Entity e) { /* TBI */ }
	void update() {
		std::cout << "HealthSystem Update" << std::endl;
	}

};