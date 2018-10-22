#pragma once
#include "Entity.h"
#include <iostream>

class AiSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		std::cout << "Control System Update" << std::endl;
	}
};