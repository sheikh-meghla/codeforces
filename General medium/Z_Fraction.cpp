#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    char ch;

    cin >> a >> ch >> b;
    cin >> c >> ch >> d;

    long long x = lcm(a, c);
    long long y = gcd(b, d);

    long long g = gcd(x, y);

    x = x / g;
    y = y / g;

    cout << x << "/" << y << endl;

    return 0;
}