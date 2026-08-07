#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        if (n % i == 0)
        {
            cout << i<<endl;
        }
        
    }
    return 0;
}