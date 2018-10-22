#pragma once

#include "Entity.h"
#include <iostream>

class PositionSystem
{
	std::vector<Entity> entities;

public:

	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		// std::cout << "Position Component Update"  << std::endl;
		std::cout << entities.size() << std::endl;
	}

};