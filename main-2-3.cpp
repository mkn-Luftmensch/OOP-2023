#include<bits/stdc++.h>
using namespace std;

extern int palindrome_sum(int[], int);

int main(){
    int array[5] = {1, 2, 0, 2, 1};
    cout << palindrome_sum(array, 0);
    return 0;
}