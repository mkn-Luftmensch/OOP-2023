#include <bits/stdc++.h>
using namespace std;

int array_sum(int array[], int n){
    int sum = 0;
    if(n<1) return 0;
    for (int i=0; i<n; i++) {
        sum+=array[i];
    }
    return sum;
}