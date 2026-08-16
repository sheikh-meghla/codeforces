#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000], b[1000];

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];

        if (a[i] != b[i])
        {
            flag = true;
        }
    }

    if (flag)
    {
        cout << "rated";
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            cout << "unrated";
            return 0;
        }
    }

    cout << "maybe";

    return 0;
}