all: mymake
mymake: main-1-1.cpp
		g++ -std=c++11 -o program main-1-1.cpp function-1-1.cpp
		./program
mymake: main-1-2.cpp
		g++ -std=c++11 -o program main-1-2.cpp function-1-2.cpp
		./program
mymake:	main-1-3.cpp
		g++ -std=c++11 -o program main-1-3.cpp function-1-3.cpp
		./program
mymake: main-1-4.cpp
		g++ -std=c++11 -o program main-1-4.cpp function-1-4.cpp
		./program
	