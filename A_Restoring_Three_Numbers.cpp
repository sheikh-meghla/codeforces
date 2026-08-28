#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mx = max({a, b, c, d});

    if (a == mx)
    {
        cout << mx - b << " " << mx - c << " " << mx - d;
    }
    else if (b == mx)
    {
        cout << mx - a << " " << mx - c << " " << mx - d;
    }
    else if (c == mx)
    {
        cout << mx - a << " " << mx - b << " " << mx - d;
    }
    else
       {
         cout << mx - a << " " << mx - b << " " << mx - c;

       }
    return 0;
}