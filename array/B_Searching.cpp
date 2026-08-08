#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll x;
    cin >> x;
    ll index = -1;
    for(ll i = 0; i < n; i++) {
        if (x == a[i])
        {
            index = i;
            break;
        }  
       
    }
    cout << index <<endl;

    
    return 0;
}