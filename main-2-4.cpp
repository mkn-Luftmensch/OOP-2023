#include <bits/stdc++.h>
using namespace std;

extern int sum_min_max(int[], int);

int main(){
    int arr[5]={1, 4, 2, 9, 100};
    cout << sum_min_max(arr, 5);
    return 0;
}