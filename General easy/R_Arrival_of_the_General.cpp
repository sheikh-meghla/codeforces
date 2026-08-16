#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_pos = 0;
    int min_pos = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[max_pos])
        {
            max_pos = i;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < a[min_pos])
        {
            min_pos = i;
        }
    }

    int ans = max_pos + (n - 1 - min_pos);

    if (max_pos > min_pos)
    {
        ans--;
    }

    cout << ans;

    return 0;
}