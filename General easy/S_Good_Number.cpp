#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        bool present[10] = {};

        for (int j = 0; j < s.size(); j++)
        {
            int digit = s[j] - '0';
            present[digit] = true;
        }

        bool good = true;

        for (int j = 0; j <= k; j++)
        {
            if (present[j] == false)
            {
                good = false;
            }
        }

        if (good)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}