#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> freq(2 * n + 5, 0);

        long long ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            int value = x - i;

            value += n;
            ans += freq[value];

            freq[value]++;
        }

        cout << ans << '\n';
    }

    return 0;
}