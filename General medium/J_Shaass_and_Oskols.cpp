#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        int l = y - 1;
        int r = a[x] - y;
        if (x - 1 >= 0)
        {
            a[x - 1] += l;
        }
        if (x + 1 < n)
        {
            a[x + 1] += r;
        }
        a[x] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\n';
    }

    return 0;
}