#include "Grade.h"

Grade::Grade() : student_id(0), course_id(0), value(0), assignment(""){}
Grade::Grade(int stud_id, int course_id, string assignment, int value) : student_id(stud_id), course_id(course_id), assignment(assignment), value(value) {}
