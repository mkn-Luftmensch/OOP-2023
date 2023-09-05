mymake: main-3-1.cpp
	g++ -W -Wall -Werror main-3-1.cpp Appliance.cpp House.cpp Fridge.cpp TV.cpp -o electricity_manager.o
	./electricity_manager.o