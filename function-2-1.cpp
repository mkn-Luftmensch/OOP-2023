#include<bits/stdc++.h>

int min_element(int array[], int n){
    if(n < 1) return 0;
    int min = 10000;
    for(int i=0; i<n; i++) {
        if(array[i] < min) min=array[i];
    }
    return min;
}