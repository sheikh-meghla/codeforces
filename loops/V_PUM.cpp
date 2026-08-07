#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    for(ll i = 1; i <= n*4; i+=4) {
        cout << i <<" "<<i+1<<" "<<i+2<<" "<< "PUM"<<endl;
    }
    return 0;
}