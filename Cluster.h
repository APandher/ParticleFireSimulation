#ifndef CLUSTER_H_
#define CLUSTER_H_

#include <SDL2/SDL.h>
#include "Particle.h"

class Cluster {
private:
	Particle* m_pParticles;
	int lastTime;

public:
	const static int numParticles = 8000;

	Cluster();
	void update(int elapsed);
	const Particle* const getParticles() { return m_pParticles; };
	~Cluster();

};

#endif 
