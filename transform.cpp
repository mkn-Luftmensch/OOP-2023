#include <bits/stdc++.h>
using namespace std;

long long binary_transformation(int decimalNumber){
    long long binaryNumber=0;
    int p=0;
    while(decimalNumber>0){
        binaryNumber+=(decimalNumber%2)*pow(10, p);
        ++p;
        decimalNumber/=2;
    }
    return binaryNumber;
}

int main(){
    cout<< binary_transformation(12);
    return 0;
}

/*
12
0*10^0+0*10^1+1*10^2+1*10^3=1100
*/