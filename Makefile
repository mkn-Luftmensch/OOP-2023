all: mymake
mymake: main-1-1.cpp function-1-1.cpp
	g++ -o output-1-1 main-1-1.cpp function-1-1.cpp
	./output-1-1
