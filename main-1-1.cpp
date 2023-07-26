#include <bits/stdc++.h>
using namespace std;

extern int array_sum(int[], int);

int main() {
    int array[8]={21, 2, 1, 12, 28, 10, 17, 10};
    cout << array_sum(array, 8);
    // int array[0];
    // cout<<array_sum(array, 0);
    return 0;
}