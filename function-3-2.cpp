#include<bits/stdc++.h>
#include<array>
using namespace std;

int median_array(int array[], int n){
    sort(array, array+n);
    if (n%2==0 || n<1) return 0;
    return array[n/2];
}