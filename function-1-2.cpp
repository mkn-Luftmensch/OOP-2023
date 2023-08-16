#include<bits/stdc++.h>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n) {
    PersonList PL;
    PL.numPeople = n;

    PL.people = new Person[n];
    for(int i=0; i<n; i++){
        PL.people[i].name="Jane Doe";
        PL.people[i].age=1;
    }
    return PL;
}