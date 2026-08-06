#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll n;
    cin >>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for (ll i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            even++;
        }
        if (a[i]%2 != 0)
        {
            odd++;
        }
        if (a[i] < 0)
        {
            negative++;
        }
        if (a[i] > 0)
        {
            positive++;
        }
        
        
    }
    cout << "Even: "<< even<<"\n"<<"Odd: "<<odd<<"\n"
    <<"Positive: "<<positive<<"\n"<<"Negative: "<<negative<<"\n";
        
    
    return 0;
}