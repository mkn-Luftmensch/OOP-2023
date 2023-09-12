#include "Course.h"
#include "Person.h"

Course::Course(std::string name, int id, int size) {
    this->name = name;
    this->id = id;
    this->size = size;
    current_size = 0;
    persons = new Person*[size];
}

Course::Course():Course("", 0, 0) {

}

void Course::addPerson(Person* new_person) {
    if (current_size < size) {
        persons[current_size] = new_person;
        current_size++;
    }
}

Course::~Course() {
    delete[] persons;
}