#include<bits/stdc++.h>
using namespace std;

extern int* readNumbers();
extern void printNumbers(int*,int);

int main() {
    int* numbers = readNumbers();
    printNumbers(numbers, 10);
    delete[] numbers;
    return 0;

}