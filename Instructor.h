#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"

class Instructor : public Person {
    private:
        int id;
    public:
        Instructor();
        Instructor(std::string name, int id);
};

#endif