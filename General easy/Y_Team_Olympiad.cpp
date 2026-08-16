#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a, b, c;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            a.push_back(i);
        }

        else if (x == 2)
        {
            b.push_back(i);
        }

        else
        {
            c.push_back(i);
        }
    }

    int teams = min(a.size(), min(b.size(), c.size()));

    cout << teams << endl;

    for (int i = 0; i < teams; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }

    return 0;
}