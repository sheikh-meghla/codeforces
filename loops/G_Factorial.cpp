#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = 1;
        ll n;
        cin >> n;
        for(ll i = 1; i <= n; i++) {
            ans *= i; 
        }

        cout << ans<<"\n";
    }
    
    return 0;
}