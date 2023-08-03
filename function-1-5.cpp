#include <bits/stdc++.h>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            array1[i][j]+=array2[i][j];
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
}