#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n,m;
    cin >> n >>m;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll b[m];
    for(ll i = 0; i < m; i++) {
        cin >> b[i];
    }
    ll sum_a = 0;
    ll sum_b = 0;
    for(ll i = 0; i < n; i++) {
        sum_a += a[i];
    }
    for(ll i = 0; i < m; i++) {
        sum_b += b[i];
    }
    if (sum_a == sum_b)
    {
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    

    return 0;
}