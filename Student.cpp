#include "Student.h"

Student::Student() : Person() {
    id = 0;
}
Student::Student(int id, string name) : Person(name){
    this->id=id;
}