#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll ans;
    ll a,b;
    char c;
    cin >> a>>c>>b;
    if (c=='+')
    {
        ans = a + b;
    }
    if (c=='-')
    {
        ans = a - b;
    }
    if (c=='*')
    {
        ans = a * b;
    }
    if (c=='/')
    {
        ans = a / b;
    }
    cout << ans <<endl;
    return 0;
}