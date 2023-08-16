#include<bits/stdc++.h>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int);

int main(){
    Person* personArray = createPersonArray(5);
    for (int i = 0; i < 5; ++i) {
        cout << "Person " << i + 1 << ": " << personArray[i].name << ", " << personArray[i].age << endl;
    }

    delete[] personArray;
    return 0;
}