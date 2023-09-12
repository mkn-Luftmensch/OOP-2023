#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <bits/stdc++.h>
#include "Grade.h"
using namespace std;
class Gradebook {
    private:
        Grade* grades;
        int currentGrades;
        int maxGrades;
    public:
        Gradebook();
        Gradebook(int maxGrades);
        void addGrade(int stud_id, int course_id, string assignment, int value);
        ~Gradebook();
};

#endif