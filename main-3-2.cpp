#include<bits/stdc++.h>
using namespace std;

extern int median_array(int[], int);

int main(){
    int array[9] = {1, 3, 2, 6, 8, 4, 5, 2, 0};
    cout<<median_array(array, 9);
}