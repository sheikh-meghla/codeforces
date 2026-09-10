#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] > mx)
        {
            mx = a[i];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += mx - a[i];
    }

    cout << ans;

    return 0;
}