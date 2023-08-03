#include<bits/stdc++.h>
using namespace std;

extern void count_digits(int[4][4]);

int main(){
    int array[4][4] ={
        {1, 2, 3, 4},
        {5, 6, 7, 9},
        {2, 3, 2, 1},
        {9, 5, 6, 2}
    };
    count_digits(array);
}