#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n+1];
        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll sum = 0;
        ll mn = INT_MAX;


        for(ll i = 1; i <= n; i++) {
            for(ll j = i + 1; j <= n; j++) {
                sum = a[i] + a[j]+j-i;
                                    
            }

            if (sum < mn)
            {
                mn = sum;
            }
        }        
        cout << mn <<endl;
    }
    return 0;
}