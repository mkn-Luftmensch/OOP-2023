#include <bits/stdc++.h>
using namespace std;



int array_min(int integers[], int length){
    int min = 10000;
    for (int i=0; i<length; i++){
        if(integers[i] < min) min = integers[i];
    }
    return min;
}

int array_max(int integers[], int length){
    int max = -10000;
    for (int i=0; i<length; i++) {
        if(integers[i] > max) max = integers[i];
    }
    return max;
}

int sum_min_max(int integers[], int length){
    if(length <= 0) return -1;
    else return (array_min(integers, length) + array_max(integers, length));
}