#include<iostream>
extern int* readNumbers();
extern bool equalsArray(int*, int*, int);

int main(){
    int* numbers1 = readNumbers();
    int* numbers2 = readNumbers();
    std::cout << equalsArray(numbers1, numbers2, 10);
    delete[] numbers1, numbers2;
    return 0;
}