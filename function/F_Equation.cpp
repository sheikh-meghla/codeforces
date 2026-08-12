#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    int x, n;
    cin >> x >> n;

    int sum = power(x, 0) - 1;
    for (int i = 2; i <= n; i += 2)
    {
        sum += power(x, i);
    }

    cout << sum << endl;

    return 0;
}