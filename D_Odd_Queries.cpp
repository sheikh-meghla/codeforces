#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        long long a[n + 1];
        long long p[n + 1];

        p[0] = 0;

        long long total = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];

            total += a[i];
            p[i] = p[i - 1] + a[i];
        }

        while (q--)
        {
            int l, r;
            long long c;

            cin >> l >> r >> c;

            long long sum = p[r] - p[l - 1];

            long long len = r - l + 1;

            long long newSum = total - sum + len * c;

            if (newSum % 2 != 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}