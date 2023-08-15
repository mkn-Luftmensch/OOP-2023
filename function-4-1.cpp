#include <bits/stdc++.h>
using namespace std;

int* readNumbers(){
    int* numbers = new int[10];
    for(int i=0; i<10; i++)
        cin >> numbers[i];
    return numbers;
}

int secondSmallestSum(int *numbers,int length){
    int smallestSum = INT_MAX;
    int secondSmallestSum = INT_MAX;
    for(int i=0; i<length; i++){
        int currentSum=0;
        for(int j=i; j<length; j++){
            currentSum+=numbers[j];
            if(currentSum <= smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = currentSum;
            }
            else if(currentSum < secondSmallestSum && currentSum != smallestSum)
                secondSmallestSum = currentSum;
        }
    }
    return secondSmallestSum;
}