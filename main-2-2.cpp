#include <bits/stdc++.h>
using namespace std;

extern int binary_to_int(int[], int);

int main(){
    int binary_digits[]={1, 1, 1, 0, 0, 0, 1, 1};
    cout << binary_to_int(binary_digits, 8);
    return 0;

}