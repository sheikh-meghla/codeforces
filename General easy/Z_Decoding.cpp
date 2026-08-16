#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans;

    if (n % 2 == 1)
    {
        for (int i = n - 1; i >= 0; i -= 2)
        {
            ans += s[i];
        }

        for (int i = 1; i < n; i += 2)
        {
            ans += s[i];
        }

        reverse(ans.begin(), ans.end());
    }
    else
    {
        for (int i = n - 1; i >= 0; i -= 2)
        {
            ans += s[i];
        }

        for (int i = 0; i < n; i += 2)
        {
            ans += s[i];
        }

        reverse(ans.begin(), ans.end());
    }

    cout << ans << '\n';

    return 0;
}