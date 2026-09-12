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

        string s;
        cin >> s;

        int count = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
            }
            else
            {
                ans += min(count, 2);
                count = 0;
            }
        }

        ans += min(count, 2);


        cout << ans << '\n';
    }

    return 0;
}
