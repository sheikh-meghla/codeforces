#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long x;
        cin >> x;

        long long r = sqrt(x);

        if (r * r != x)
        {
            cout << "NO\n";
            continue;
        }

        bool prime = true;

        if (r < 2)
        {
            prime = false;
        }

        for (long long i = 2; i * i <= r; i++)
        {
            if (r % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
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