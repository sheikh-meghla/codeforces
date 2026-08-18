#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<bool> s(n, false);

    for (int j = 0; j < m; j++)
    {
        char mx = '0';
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i][j]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] == mx)
            {
                s[i] = true;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i])
        {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}