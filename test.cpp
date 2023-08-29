#include <bits/stdc++.h>
using namespace std;

int main(){
    time_t now = time(nullptr);
    time_t after = time(nullptr);
    cout << difftime(now, after);
    return 0;
}