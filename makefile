mymake: main-1-1.cpp
	g++ -Wall main-1-1.cpp Car.cpp -o out-1-1
	./out-1-1

mymake: main-2-1.cpp
	g++ -Wall main-2-1.cpp Car.cpp Tesla.cpp -o out-2-1
	./out-2-1