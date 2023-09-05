mymake: main-1-1.cpp
	g++ main-1-1.cpp vehicle.cpp car.cpp bus.cpp motorbike.cpp -o parking_simulation.o
	./parking_simulation.o

mymake: main-1-2.cpp
	g++ main-1-2.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp ParkingLot.cpp -o parking_simulation2.o
	./parking_simulation2.o

mymake: main-1-3.cpp
	g++ -Wall main-1-3.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp ParkingLot.cpp -o parking_simulation3.o
	./parking_simulation3.o