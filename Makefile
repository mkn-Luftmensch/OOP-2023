all: mymake
mymake: main-1-1.cpp
		g++ -o output-1-1 main-1-1.cpp function-1-1.cpp
		./output-1-1
mymake: main-2-1.cpp
		g++ -o output-2-1 main-2-1.cpp function-2-1.cpp
		./output-2-1
mymake: main-3-1.cpp
		g++ -o output-3-1 main-3-1.cpp function-3-1.cpp
		./output-3-1
mymake: main-3-2.cpp
		g++ -o output-3-2 main-3-2.cpp function-3-2.cpp
		./output-3-2
mymake: main-4-1.cpp
		g++ -o output-4-1 main-4-1.cpp function-4-1.cpp
		./output-4-1