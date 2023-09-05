mymake: main-1-1.cpp
	g++ -W -Wall -Werror main-1-1.cpp Car.cpp Bus.cpp Motorbike.cpp Vehicle.cpp -o ParkingLotSimulator1.exe
	./ParkingLotSimulator1.exe

mymake: main-1-2.cpp
	g++ -Wall main-1-2.cpp Car.cpp Bus.cpp Motorbike.cpp Vehicle.cpp ParkingLot.cpp -o ParkingLotSimulator2.exe
	./ParkingLotSimulator2.exe

mymake: main-1-3.cpp
	g++ -Wall main-1-3.cpp Car.cpp Bus.cpp Motorbike.cpp Vehicle.cpp ParkingLot.cpp -o ParkingLotSimulator3.exe
	./ParkingLotSimulator3.exe