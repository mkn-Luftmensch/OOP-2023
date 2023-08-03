all: mymake
mymake: main-1-1.cpp function-1-1.cpp
	g++ -o output-1-1 main-1-1.cpp function-1-1.cpp
	./output-1-1
mymake: main-1-2.cpp function-1-2.cpp
	g++ -o output-1-2 main-1-2.cpp function-1-2.cpp
	./output-1-2
mymake: main-1-3.cpp function-1-3.cpp
	g++ -o output-1-3 main-1-3.cpp function-1-3.cpp
	./output-1-3
mymake: main-1-4.cpp function-1-4.cpp
	g++ -o output-1-4 main-1-4.cpp function-1-4.cpp
	./output-1-4
mymake: main-1-5.cpp function-1-5.cpp
	g++ -o output-1-5 main-1-5.cpp function-1-5.cpp
	./output-1-5
mymake: main-2-1.cpp function-2-1.cpp
	g++ -o output-2-1 main-2-1.cpp function-2-1.cpp
	./output-2-1
mymake: main-2-2.cpp function-2-2.cpp
	g++ -o output-2-2 main-2-2.cpp function-2-2.cpp
	./output-2-2
mymake: main-2-3.cpp function-2-3.cpp
	g++ -o output-2-3 main-2-3.cpp function-2-3.cpp
	./output-2-3
mymake: main-2-4.cpp function-2-4.cpp
	g++ -o output-2-4 main-2-4.cpp function-2-4.cpp
	./output-2-4