#include <bits/stdc++.h>
using namespace std;

void print_binary_str(string decimal_number){
    int decimalNumber = stoi(decimal_number);
    if (decimalNumber == 0) {
        cout << "0" << endl;
    }

    string binaryString = "";
    while(decimalNumber > 0){
        binaryString = char((decimalNumber & 1) + '0') + binaryString; // AND 1 = modulo 2, char((decimalNumber&1)+'0') = convert to char
        decimalNumber >>= 1; // devided by 2
    } //binaryNumber+=(decimalNumber%2)*pow(10,p)
    cout << binaryString << endl;
}