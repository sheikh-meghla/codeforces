#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    long long gcd = 1;
    for (long long i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    long long lcm = (a / gcd) * b;

    cout << gcd << " " << lcm << endl;

    return 0;
}