#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    long long x = a;
    long long y = b;

    while (y != 0)
    {
        long long temp = y;
        y = x % y;
        x = temp;
    }

    long long gcd = x;
    long long lcm = (a / gcd) * b;

    cout << gcd << " " << lcm << endl;

    return 0;
}