#include "Cluster.h"




Cluster::Cluster(): lastTime(0){
	m_pParticles = new Particle[numParticles];
}

void Cluster::update(int elapsed){

	int interval = elapsed - lastTime;

	for (int i = 0; i < Cluster::numParticles; i++) {
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;

}

Cluster::~Cluster(){
	delete[] m_pParticles;
}