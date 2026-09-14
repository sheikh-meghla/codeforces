#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (i == 0)
        {
            p[i] = x;
        }
        else
        {
            p[i] = p[i - 1] + x;
        }
    }

    int m;
    cin >> m;

    while (m--)
    {
        int q;
        cin >> q;

        int pos = lower_bound(p.begin(), p.end(), q) - p.begin();

        cout << pos + 1 << '\n';
    }

    return 0;
}