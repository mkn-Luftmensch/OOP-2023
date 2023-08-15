#include<bits/stdc++.h>
using namespace std;

extern int* readNumbers();
extern int secondSmallestSum(int* ,int);

int main(){
    int* numbers = readNumbers();
    cout<<secondSmallestSum(numbers,10)<<endl;;
    delete[] numbers;
    return 0;
}