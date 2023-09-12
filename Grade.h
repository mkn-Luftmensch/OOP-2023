#ifndef GRADE_H
#define GRADE_H
#include<string>
using namespace std;
class Grade {
    private:
        string assignment;
        int value;
        int student_id;
        int course_id;
    public: 
        Grade();
        Grade(int stud_id, int course_id, string assignment, int value);
};






#endif