#include "University.h"

University::University() 
{
    name = "";
    location ="";
    maxCourses=0;
    currentCourses=0;
    courses = new Course[maxCourses];
} 

University::University(int maxCourses, string name, string location, Gradebook book) {
    this->maxCourses = maxCourses;
    this->name = name;
    this->location = location;
    this->gradebook = book;
    currentCourses = 0;
    courses = new Course[maxCourses];
}

void University::addCourse(int courseCapacity, int id, string name){
    if(currentCourses < maxCourses){
        courses[currentCourses] = Course(courseCapacity, name, id);
        currentCourses++;
    }
}

University::~University() {delete[] courses;}