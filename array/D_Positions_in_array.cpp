#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++) {
        if (a[i] <= 10)
        {
            cout << "A["<<i<<"] = "<<a[i]<<endl;
        }
        
    }
    return 0;
}