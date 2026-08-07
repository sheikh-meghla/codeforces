#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    int t;
    cin >> t;
    while (t--)
    {
        ll a,b;
        cin >> a >> b;

        ll mx = max(a,b);
        ll mn = min(a,b);
        ll sum = 0;
        for (int i = mn+1; i < mx; i++)
        {
            if (i%2!=0)
            {
                sum += i;
            }
            
        }
        cout << sum << endl;
    }
    
    return 0;
}