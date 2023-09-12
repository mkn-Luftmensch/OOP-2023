#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Course.h"
#include "Gradebook.h"
#include <string>
using namespace std;

class University {
    private:
        string name;
        string location;
        Course* courses;
        Gradebook* current_gradebook;
        int size;
        int current_size;
    public:
        University();
        University(string name, string location, int size);
        void addCourse(int id, string name);
};

#endif