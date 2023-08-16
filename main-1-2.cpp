#include <bits/stdc++.h>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(){
    int n = 7;
    PersonList person_list = createPersonList(n);
    cout << "num People: " << person_list.numPeople << endl;
    for(int i=0; i<n; i++){
        cout << "Person " << i + 1 << ": " << person_list.people[i].name << ", " << person_list.people[i].age << endl;
    }

    return 0;
}