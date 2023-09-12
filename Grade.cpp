#include "Grade.h"

Grade::Grade() {
    student_id = 0;
    course_id = 0;
    assignment = "";
    value = 0;
}

Grade::Grade(int stud_id, int course_id, string assignment, int value) {
    student_id = stud_id;
    this->course_id = course_id;
    this->assignment = assignment;
    this->value = value;
}