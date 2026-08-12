#include <bits/stdc++.h>
using namespace std;

long long evenSum(long long n)
{
    long long k = n / 2;
    return k * (k + 1);
}

long long oddSum(long long n)
{
    long long k = (n + 1) / 2;
    return k * k;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }

    long long sum = (a + b) * (b - a + 1) / 2;
    long long even = evenSum(b) - evenSum(a - 1);
    long long odd = oddSum(b) - oddSum(a - 1);

    cout << sum << endl;
    cout << even << endl;
    cout << odd << endl;

    return 0;
}