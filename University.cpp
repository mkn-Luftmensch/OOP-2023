#include "University.h"

University::University() : name(""), location(""), currentCourses(0) {}
University::University(int maxCourses, string name, string location, Gradebook book) : 
maxCourses(maxCourses), name(name), location(location), gradebook(book), courses(new Course[maxCourses]){}
void University::addCourse(int courseCapacity, int id, string name){
    if(currentCourses < maxCourses){
        courses[currentCourses] = Course(courseCapacity, name, id);
        currentCourses++;
    }
}

University::~University() {delete[] courses;}