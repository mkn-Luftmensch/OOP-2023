#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person{
    protected:
        string name;
    public:
        Person();
        Person(string name);
};


#endif