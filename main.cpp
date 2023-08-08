#include <bits/stdc++.h>
#include "workshop.h"
using namespace std;

int main() {
    // double db = 22.7;
    // char c = 't';
    // double* db_ptr;
    // char* c_ptr;
    // db_ptr = &db;
    // c_ptr = &c;
    // cout << *db_ptr << " " << *c_ptr;

    // double db = 22.7;
    // double* ptr = &db;
    // changeValue(ptr);
    // cout << db;

    // double array[4] = {22, 17, 7, 10};
    // double* pointers = &array[4];
    
    // printArray(pointers, 4);
    // cout << arrayMax(pointers, 4);
    double* myDynamicArray = dynamicArray(4, 22.7);
    for( int i=0; i<4; i++) {
        cout << myDynamicArray[i] << " ";
    }
    cout << endl << arrayMax(myDynamicArray, 4);
    delete[] myDynamicArray;

    return 0;
}