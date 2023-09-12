#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <bits/stdc++.h>
#include "Course.h"
#include "Gradebook.h"
using namespace std;

class University {
    private:
        Course* courses;
        Gradebook gradebook;
        string name;
        string location;
        int maxCourses;
        int currentCourses;
    public:
        University();
        University(int maxCourses, string name, string location, Gradebook book);
        void addCourse(int courseCapacity, int id, string name);
        ~University();
};









#endif