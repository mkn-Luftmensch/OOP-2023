#include "University.h"
#include <bits/stdc++.h>
#include "Student.h"
#include "Instructor.h"

using namespace std;

int main() {
    Gradebook gradebook(10);
    Course COMP_SCI(22, "Object Oriented Programming", 1106);
    Student Mike(2103, "Mai Khoi Nguyen");
    COMP_SCI.addPerson(&Mike);
    Grade mknGrade(2103, 1106, "OOP", 100);
    gradebook.addGrade(2103, 1106, "OOP", 100);
    University UoA(17, "University of Adelaide", "Adelaide", gradebook);
    UoA.addCourse(22, 1106, "Object Oriented Programming");

    
    return 0;
}
