#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <SDL.h>

class Particle {


private:
	double m_speed;
	double m_direction;


public:

	double m_x;
	double m_y;


	Particle();
	~Particle();
	void update(int interval);
	void init();

};






#endif