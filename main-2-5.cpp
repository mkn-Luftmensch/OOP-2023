#include<iostream>
extern bool is_descending(int[], int);

int main(){
    int array[7] = {91, 12, 10, 8, 7, 6, 5};
    std::cout<<is_descending(array, 7);
    return 0;
}