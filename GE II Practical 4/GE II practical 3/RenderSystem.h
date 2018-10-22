#pragma once

#include "Entity.h"

#include <iostream>

class RenderSystem
{
	std::vector<Entity> entities;

public:

	void AddComponent(Entity e) { entities.push_back(e); }
	void update() {
		std::cout << "Render System Update" << std::endl;
	}
};