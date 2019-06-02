#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include <math.h>
#include <time.h>
#include "Particle.h"
#include "Cluster.h"

int main(int argc, char* argv[]) {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		std::cout << "Error initialising SDL." << std::endl;
	}

	Cluster cluster;


	while(true) {

		int elapsed = SDL_GetTicks();

		cluster.update(elapsed);

		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red   = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue  = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

		const Particle* pParticles = cluster.getParticles();

		for (int i = 0; i < cluster.numParticles; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * screen.screenWidth / 2;
			int y = particle.m_y * screen.screenWidth / 2 + screen.screenHeight / 2;

			screen.setPixel(x, y, red, green, blue);
		}

		screen.boxBlur();

		// Draw the screen
		screen.update();

		// Check for messages/events
		if (screen.processEvents() == false) {
			break;
		}
	}

	return 0;

	}

