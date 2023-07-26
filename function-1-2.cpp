#include <bits/stdc++.h>
using namespace std;

double array_mean(int array[], int n) {
    if (n<1) return 0;
    double mean = 0;
    for (int i=0; i<n; i++){
        mean += array[i];
    }
    return mean/n;
}