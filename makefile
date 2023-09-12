mymake: main.cpp
	g++ -Wall main.cpp University.cpp Course.cpp Gradebook.cpp Grade.cpp Person.cpp Student.cpp Instructor.cpp -o myUni.exe
	./myUni.exe