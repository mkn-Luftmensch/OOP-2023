#include<iostream>
extern int* readNumbers();
extern bool equalsArray(int*, int*, int);
extern int* reverseArray(int*, int);

int main(){
    int* numbers = readNumbers();
    int* reverse = reverseArray(numbers, 10);
    std::cout << equalsArray(numbers, reverse, 10);
    delete[] numbers, reverse;
    return 0;
}