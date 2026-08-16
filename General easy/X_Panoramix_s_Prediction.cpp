#include <bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    if (x < 2)
    {
        return false;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int next = n + 1;

    while (!prime(next))
    {
        next++;
    }

    if (next == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}