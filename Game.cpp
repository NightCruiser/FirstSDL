#include "Game.hpp"
#include <iostream>

Game::Game() : isRunning_(false), width_(800), height_(600),
       	mainWindowPtr_(nullptr),
	mainSurfacePtr_(nullptr), pictureSurfacePtr_(nullptr) {}

Game::Game(int width, int height) : isRunning_(false),
       	width_(width), height_(height), 
        mainWindowPtr_(nullptr),
        mainSurfacePtr_(nullptr), pictureSurfacePtr_(nullptr) {

	if (width <= 0 || height <= 0) {
		width_ = 640;
		height_ = 480;
	}
}

Game::~Game() {}

Game::Run() {
	if (isRunning_) {
		std::cout << "Game is already running";
		return;
	}

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cerr << "SDL Initialisation failed : " <<
			  << SDL_GetError() << std::endl;
		return;
	} else {
		mainWindowPtr_ = SDL_CreateWindow("MyGame", 
				SDL_WINDOWPOS_UNDEFINED, 
				SDL_WINDOWPOS_UNDEFINED,
				width, height, 0);
		if (mainWindowPtr_ == nullptr) {
			std::cerr << "Window Creation Failed: " <<
				  << SDL_GetError() << std::endl;
			return;
		}

		mainSurfacePtr_ = SDL_GetWindowSurface(mainWindowPtr_);
/*draw a surface*/
		if (mainSurfacePtr_ == nullptr) {
			std::cerr << "cannot get surface: " <<
				  << SDL_GetError() << std::endl;
			return;
		}




	}

	SDL_Quit();
}

Game::IsRunning() {
	return isRunning_;
}

Game::Terminate() {}

Game::LoadMedia() {}

