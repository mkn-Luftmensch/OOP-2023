#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

extern PersonList deepCopyPersonList(PersonList);

int main(){
    PersonList PL;
    PL.numPeople = 22;
    PL.people = new Person[PL.numPeople];
    for(int i=0; i<PL.numPeople; i++){
        PL.people[i].age = 18;
        PL.people[i].name = "Jane";
    }
    PersonList copiedPL = deepCopyPersonList(PL);
    cout << copiedPL.numPeople << endl;
    for(int i=0; i<PL.numPeople; i++){
        cout << "Person " << i + 1 << ": " << copiedPL.people[i].name << ", " << copiedPL.people[i].age << endl;
    }
    delete[] PL.people;
    delete[] copiedPL.people;
    return 0;
}