#include "Person.h"
#include "Student.h"

Student::Student(std::string name, int id):Person(name), id(id) {

}

Student::Student():Student("", 0) {

}

