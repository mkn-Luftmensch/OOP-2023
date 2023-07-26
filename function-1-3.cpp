#include<bits/stdc++.h>

int num_count(int array[], int n, int number) {
    if(n<1) return 0;
    int num_equal = 0;
    for(int i = 0; i<n; i++){
        if(array[i] == number) num_equal++;
    }
    return num_equal;
}