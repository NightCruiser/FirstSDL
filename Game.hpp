#include "SDL2/SDL.h"

class Game {
public:
	Game();
	Game(int width, int height);
	~Game();
	void Run();
	bool IsRunning();
	bool LoadMedia();
	void Terminate();
	
private:
	bool isRunning_;
	SDL_Window *mainWindowPtr_;
	int width_;
	int height_;
	SDL_Surface *mainSurfacePtr_;
	SDL_Surface *pictureSurfacePtr_;
};
