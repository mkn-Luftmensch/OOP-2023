all: mymake
mymake:transform.cpp
	g++  -o transform transform.cpp
	./transform
mymake:arithmetic.cpp
	g++ -o arithmetic arithmetic.cpp
	./arithmetic