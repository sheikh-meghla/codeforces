#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--)
    {
        long long x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag == true)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }

    return 0;
}