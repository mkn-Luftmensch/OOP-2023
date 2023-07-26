#include<iostream>
extern bool is_ascending(int[], int);

int main(){
    int array[7] = {1, 2, 3, 4, 5, 6, 6};
    std::cout<<is_ascending(array, 7);
    return 0;
}