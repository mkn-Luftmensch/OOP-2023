#include<bits/stdc++.h>
using namespace std;

extern int* readNumbers();
extern void printNumbers(int*, int);
extern void hexDigits(int*, int);

int main(){
    int* numbers = readNumbers();
    hexDigits(numbers, 10);
    delete[] numbers;
    return 0;
}