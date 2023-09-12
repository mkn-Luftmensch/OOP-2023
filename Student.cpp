#include "Student.h"

Student::Student() : id(0), Person(){}
Student::Student(int id, string name) : id(id), Person(name){}