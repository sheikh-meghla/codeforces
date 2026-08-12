#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, x;
    cin >> a >> b >> x;

    if (a > b)
    {
        swap(a, b);
    }

    long long n1 = b / x;
    long long n2 = (a - 1) / x;

    long long sum1 = x * n1 * (n1 + 1) / 2;
    long long sum2 = x * n2 * (n2 + 1) / 2;

    cout << sum1 - sum2 << endl;

    return 0;
}