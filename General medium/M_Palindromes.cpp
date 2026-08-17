#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    bool palindrome = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (!palindrome)
    {
        cout << n << '\n';
        return 0;
    }

    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[0])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << n - 1 << '\n';
    }

    return 0;
}