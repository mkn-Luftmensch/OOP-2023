mymake: main.cpp
	g++ -Wall main.cpp Course.cpp Grade.cpp Gradebook.cpp Instructor.cpp Person.cpp Student.cpp University.cpp -o myUni.exe
	./myUni.exe