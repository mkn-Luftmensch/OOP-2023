#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
#include <string>
using namespace std;

class Instructor : public Person{
    public:
        Instructor();
        Instructor(string name);
};

#endif