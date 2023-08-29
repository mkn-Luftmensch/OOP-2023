mymake: main-1-1.cpp
	g++ main-1-1.cpp vehicle.cpp car.cpp bus.cpp motorbike.cpp -o parking_simulation.o
	./parking_simulation.o
