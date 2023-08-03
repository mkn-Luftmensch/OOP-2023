#include <bits/stdc++.h>
using namespace std;

void count_digits(int array[4][4]){
    int frequency[10]={0};
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++) 
            frequency[array[i][j]]++;

    cout << "0:" << frequency[0] << ";1:" << frequency[1] << ";2:" << frequency[2] << ";3:" << frequency[3] << ";4:" << frequency[4] << ";5:" << frequency[5] << ";6:" << frequency[6] << ";7:" << frequency[7] << ";8:" << frequency[8] << ";9:" << frequency[9] << ";";
}