#include<bits/stdc++.h>
using namespace std;

extern int bin_to_int(int[], int);

int main(){
    int binary[4]={1, 1, 0, 1}; //1*1+0+4+8
    cout << bin_to_int(binary, 4);
    return 0;
}