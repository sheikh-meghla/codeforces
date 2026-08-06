#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    if (n==1)
    {
        cout << -1<<endl;
        return 0;
    }
    
    for (ll i = 2; i <= n; i++)
    {
        if (i%2==0)
        {
            cout << i<<endl;
        }


        
    }

    
    
    return 0;
}