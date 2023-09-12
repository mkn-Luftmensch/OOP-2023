#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <bits/stdc++.h>
using namespace std;

class Student : public Person {
    private:
        int id;
    public: 
        Student();
        Student(int id, string name);
}; 







#endif