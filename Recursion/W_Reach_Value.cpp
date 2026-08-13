#include <bits/stdc++.h>
using namespace std;

bool reach(long long n)
{
    if (n == 1)
    {
        return true;
    }

    if (n % 10 != 0 && n % 20 != 0)
    {
        return false;
    }
    if (n % 10 == 0 && reach(n / 10))
    {
        return true;
    }
    if (n % 20 == 0 && reach(n / 20))
    {
        return true;
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (reach(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}