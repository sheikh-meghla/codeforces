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
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << abs(sum) <<endl;

    return 0;
}