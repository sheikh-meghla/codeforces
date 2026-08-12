#include<bits/stdc++.h>

using namespace std;

int main() {

    int l,r,m;
    cin >> l >> r>> m;
    long long mul = 1;
    for(int i = l; i <= r; i++) {
        mul = (mul * i)%m;
    }
    cout << mul << endl;
    return 0;
}