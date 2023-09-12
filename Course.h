#ifndef COURSE_H
#define COURSE_H
#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

class Course {
    private:
        Person** persons;
        int capacity;
        int currentPersons;
        string name;
        int id;

    public:
        Course();
        Course(int capacity, string name, int course_id);
        void addPerson(Person* p);
        ~Course();
};


#endif