#include <bits/stdc++.h>
using namespace std;

extern int sum_if_palindrome(int[], int);

int main(){
    int integers[5]={1, 2, 100, 2, 1};
    cout << sum_if_palindrome(integers, 5);
    return 0;
}