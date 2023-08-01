all: mymake
mymake:transform.cpp
	g++  -o transform transform.cpp
	./transform
