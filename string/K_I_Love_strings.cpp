#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, t;
        cin >> s >> t;

        int mn = min(s.size(), t.size());
        for (int i = 0; i < mn; i++)
        {
            cout << s[i] << t[i];
        }

        if (s.size() > t.size())
        {
            cout << s.substr(mn);
        }
        else if (t.size() > s.size())
        {
            cout << t.substr(mn);
        }

        cout << '\n';
    }

    return 0;
}

