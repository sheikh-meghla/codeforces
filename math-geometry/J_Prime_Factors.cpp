#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    bool flag = true;

    for (long long i = 2; i * i <= n; i++)
    {
        int count = 0;

        while (n % i == 0)
        {
            count++;
            n = n / i;
        }

        if (count > 0)
        {
            if (!flag)
            {
                cout << "*";
            }

            cout << "(" << i << "^" << count << ")";

            flag = false;
        }
    }

    if (n > 1)
    {
        if (!flag)
        {
            cout << "*";
        }

        cout << "(" << n << "^1)";
    }

    return 0;
}