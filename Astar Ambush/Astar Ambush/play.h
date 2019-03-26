#pragma once

#include <SDL.h>

#include <vector>

class play
{
public:
	play();
	~play();

	void update(double dt);
	void render(SDL_Renderer *renderer);
};

