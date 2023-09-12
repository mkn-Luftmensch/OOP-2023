#include "Gradebook.h"

Gradebook::Gradebook() : currentGrades(0) {
}
Gradebook::Gradebook(int maxGrades) {
    grades = new Grade[maxGrades];
    currentGrades = 0;
    this->maxGrades = maxGrades;
}
void Gradebook::addGrade(int stud_id, int course_id, string assignment, int value) {
    if(currentGrades < maxGrades) {
        grades[currentGrades] = Grade(stud_id, course_id, assignment, value);
        currentGrades++;
    }
} 
Gradebook::~Gradebook() {
    delete[] grades;
}