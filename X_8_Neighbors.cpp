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

    int x, y;
    cin >> x >> y;
    x--;
    y--;

    bool flag = true;

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (i < 0 || i >= n || j < 0 || j >= m)
            {
                continue;
            }

            if (i == x && j == y)
            {
                continue;
            }

            if (a[i][j] != 'x')
            {
                flag = false;
            }
        }
    }

    if (flag)
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}