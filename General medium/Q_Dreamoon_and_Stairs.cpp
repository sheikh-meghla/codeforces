#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int min = (n + 1) / 2;

    int ans = ((min + m - 1) / m) * m;

    if (ans <= n)
    {
        cout << ans << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}