#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Person.h"
using namespace std;

class Course {
    private:
        string name;
        int id;
        Person** persons;
        int size;
        int current_size;
    public:
        Course();
        Course(std::string name, int id, int size);
        void addPerson(Person* new_person);
        ~Course();
};

#endif