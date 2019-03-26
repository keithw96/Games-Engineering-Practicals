#pragma once

#include <SDL.h>


class Game
{
public:

	void initialise();
	void run();
	void update();
	void render();

private:
	SDL_Window* m_window;
	SDL_Surface* m_surface;

	SDL_Renderer* m_renderer;
};