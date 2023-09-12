#include "Grade.h"
#include "Person.h"
#include "Student.h"

Grade::Grade() {

}

Grade::Grade(int student_id, int course_id, std::string assignment, int value) {
    this->student_id = student_id;
    this->course_id = course_id;
    this->assignment = assignment;
    this->value = value;
}

