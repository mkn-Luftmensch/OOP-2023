#include "Course.h"

Course::Course(){
    this->capacity = 0;
    this->currentPersons = 0;
    this->id = 0;
    persons = new Person*[0];
}

Course::Course(int capacity, string name, int course_id) {
    this->currentPersons = 0;
    this->capacity = capacity;
    this->name = name;
    id = course_id;
    persons = new Person*[capacity];
}

void Course::addPerson(Person* p){
    if (currentPersons < capacity) {
        persons[currentPersons] = p;
        currentPersons++;
    }
}

Course::~Course() {
    delete[] persons;
}