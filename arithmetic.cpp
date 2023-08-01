#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(long long binaryNumber){
    int decimalNumber=0;
    int p=0;
    while(binaryNumber>0){
        decimalNumber+=(binaryNumber%10)*pow(2, p);
        p++;
        binaryNumber/=10;
    }
    return decimalNumber;
}


long long decimalToBinary(int decimalNumber){
    long long binaryNumber=0;
    int p=0;
    while(decimalNumber>0){
        binaryNumber+=(decimalNumber%2)*pow(10, p);
        p++;
        decimalNumber/=2;
    }
    return binaryNumber;
}


long long binaryArithmetic(long long binaryNumber1, long long binaryNumber2){
    return(decimalToBinary(binaryToDecimal(binaryNumber1)+binaryToDecimal(binaryNumber2)));
}

int main(){
    cout<< binaryArithmetic(111011101011, 111011101011);
}