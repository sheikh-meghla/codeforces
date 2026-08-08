#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    ll a[n] ;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++) {
        if (a[i] < 0)
        {
            a[i] = 2;
        }
        else if (a[i] > 0)
        {
            a[i] = 1;
        }
         
    }
    for(ll i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }
    cout << endl;
    return 0;
}