#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    PersonList pl;
    pl.numPeople = 10;
    pl.people = new Person[pl.numPeople];
    for(int i=0; i<pl.numPeople; i++){
        pl.people[i].age = 17;
        pl.people[i].name = "Mike";
    }
    PersonList shallowCopyPL = shallowCopyPersonList(pl);
    cout << "numPeople: " << shallowCopyPL.numPeople << endl;
    for(int i=0; i<shallowCopyPL.numPeople; i++){
        cout << "Person " << i+1 << ": " << shallowCopyPL.people[i].name << ", " <<shallowCopyPL.people[i].age << endl;
    }
    return 0;
}