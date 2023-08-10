#include<bits/stdc++.h>
using namespace std;


bool is_array_palindrome(int integers[], int length) {
    if(length <= 0) return false;
    for(int i=0; i<=length/2; i++){
        if (integers[i] != integers[length-i-1]) return false;
    }
    return true;
}
int sum_integers(int integers[], int length) {
    if(length <= 0) return -1;
    int sum = 0;
    for(int i=0; i<length; i++){
        sum+=integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length) {
    if(length <=0) return -1;
    if(is_array_palindrome(integers, length)) return sum_integers(integers, length);
    return -2;
}

// 5 1, 2, 1, 2, 1