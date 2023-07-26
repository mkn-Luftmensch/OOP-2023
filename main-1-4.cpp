#include<bits/stdc++.h>
using namespace std;

extern int sum_two_arrays(int[], int[], int);

int main() {
    int array[7]={2, 1, 5, 3, 2, 4, 9};
    int secondarray[7]={1, 3, 2, 5, 6, 4, 8};
    cout<<sum_two_arrays(array, secondarray, 7);
    return 0;
}