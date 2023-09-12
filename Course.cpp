#include "Course.h"

Course::Course() : capacity(0), currentPersons(0), name(""), id(0), persons(new Person*[0]){}
Course::Course(int capacity, string name, int course_id) : capacity(capacity), currentPersons(0), name(name), id(course_id), persons(new Person*[capacity]) {}
void Course::addPerson(Person* p){
    if (currentPersons < capacity) {
        persons[currentPersons] = p;
        currentPersons++;
    }
}

Course::~Course() {
    delete[] persons;
}