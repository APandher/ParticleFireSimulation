CC=g++

PROGRAM_NAME= simulation
OBJS = main.cpp Particle.cpp Cluster.cpp Screen.cpp

simulation:
	$(CC) $(OBJS) -o $(PROGRAM_NAME) -lSDL2

clean:
	rm  *.o $(PROGRAM_NAME) 
