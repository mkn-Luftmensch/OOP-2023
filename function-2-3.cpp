#include<iostream>
using namespace std;

void two_five_nine(int array[], int n){
    int num2, num5, num9=0;
    for(int i=0; i<n; i++){
        switch (array[i]) {
            case 2:
                num2++;
                break;
            case 5:
                num5++;
                break;
            case 9:
                num9++;
                break;
            default:
                break;
        }
    }
    cout<<"2:" << num2 << ";5:" << num5 << ";9:" << num9 << ";" << endl;
}