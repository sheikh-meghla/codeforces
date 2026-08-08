#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 1; i < n; i++) {
        cin >> a[i];
    }
    ll mn = INT_MAX;
    ll index = 0;
    for(ll i = 1; i <= n; i++) {
        if (a[i]<mn)
        {
            mn = a[i];
            index = i;
        } 
         
    }
    cout << mn <<" "<< index << endl;
    
    
    return 0;
}