#include<bits/stdc++.h>
using namespace std;
 
extern int sum_diagonal(int[4][4]);

int main(){
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    cout<<sum_diagonal(array);
    return 0;
}