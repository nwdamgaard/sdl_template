#include <iostream>
#include <cstdint>
#include "SDL.h"

const uint16_t WIDTH = 900;
const uint16_t HEIGHT = 600;

void render(SDL_Renderer* renderer) {
	// Rendering code goes here...
}

int main() {
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "SDL could not be initialized." << std::endl;
		return 0;
	}

	SDL_Window* window = SDL_CreateWindow("template", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
	if(window == NULL) {
		std::cout << "SDL window could not be created." << std::endl;
		return 0;
	}

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED || SDL_RENDERER_PRESENTVSYNC);
	if(renderer == NULL) {
		std::cout << "SDL renderer could not be created." << std::endl;
	}

	bool quit = false;
	SDL_Event e;
	while(!quit) {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);

		render(renderer);

		SDL_RenderPresent(renderer);

		while(SDL_PollEvent(&e) != 0) {
			if(e.type == SDL_QUIT) {
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();
}
