#include "University.h"
#include "Course.h"
#include "Gradebook.h"



University::University(std::string name, std::string location, int size) {
    this->name = name;
    this->location = location;
    this->size = size;
    current_size = 0;
    courses = new Course[size];
    current_gradebook = new Gradebook;
}

University::University() {

}

void University::addCourse(int id, std::string name) {
    if (current_size < size) {
        courses[current_size] = Course(name, id, 5);
        current_size++;
    }
}

