#include "Grade.h"
#include "Gradebook.h"

Gradebook::Gradebook(int size) {
    current_size = 0;
    this->size = size;
    grades = new Grade[size];
}

Gradebook::Gradebook() {

}

void Gradebook::addGrade(int student_id, int course_id, std::string assignment, int value) {
    if (current_size < size) {
        grades[current_size] = Grade(student_id, course_id, assignment, value);
        current_size++;
    }

}