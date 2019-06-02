#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>
#include <string.h>

class Screen {

private:

	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_texture;
	Uint32* m_buffer1;
	Uint32* m_buffer2;


public:

	const static int screenWidth{ 800 };
	const static int screenHeight{ 600 };

	Screen();
	bool init();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void update();
	bool processEvents();
	void boxBlur();
	~Screen();
	


};







#endif



