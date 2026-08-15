#include <bits/stdc++.h>
using namespace std;

bool Prime(long long n)
{
    if (n < 2)
    {
        return false;
    }

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    long long fib[51];
    bool prime[51];

    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 1; i <= 50; i++)
    {
        prime[i] = Prime(fib[i]);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (prime[n])
        {
            cout << "prime\n";
        }
        else
        {
            cout << "not prime\n";
        }
    }

    return 0;
}