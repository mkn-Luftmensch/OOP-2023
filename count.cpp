#include <bits/stdc++.h>
using namespace std;

int count(int array[], int n){
    int num=0;
    for(int i=1; i<=n; i++){
        if(array[i]%2==0) num++;
    }
    return num;
}