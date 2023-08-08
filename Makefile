# Workshop Makefile

workshop: main.o
	g++ -o workshop main.o

main.o: main.cpp workshop.h
	g++ -c main.cpp

run:
	./workshop