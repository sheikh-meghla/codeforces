#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, int n, int m, int a[10][10])
{
    if (i == n - 1 && j == m - 1)
    {
        return a[i][j];
    }

    int down = INT_MIN;
    int right = INT_MIN;

    if (i + 1 < n)
    {
        down = solve(i + 1, j, n, m, a);
    }

    if (j + 1 < m)
    {
        right = solve(i, j + 1, n, m, a);
    }

    return a[i][j] + max(down, right);
}

int main()
{
    int n, m;
    int a[10][10];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << solve(0, 0, n, m, a) << endl;

    return 0;
}