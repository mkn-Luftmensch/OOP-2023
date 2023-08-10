#include<bits/stdc++.h>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits) {
    int dec = 0;
    int p = number_of_digits-1;
    for(int i=0; i<number_of_digits; i++){
        dec+=binary_digits[i]*pow(2, p);
        p--;
    }
    return dec;
}