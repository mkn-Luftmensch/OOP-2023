#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

PersonList deepCopyPersonList(PersonList pl){
    PersonList deepCopy;
    deepCopy.numPeople = pl.numPeople;
    deepCopy.people = new Person[pl.numPeople];
    for(int i=0; i<pl.numPeople; i++){
        deepCopy.people[i].age=pl.people[i].age;
        deepCopy.people[i].name=pl.people[i].name;
    }
    return deepCopy;
}