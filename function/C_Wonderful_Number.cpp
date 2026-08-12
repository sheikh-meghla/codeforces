#include <bits/stdc++.h>
using namespace std;

string binary(int n)
{
    string s;

    while (n > 0)
    {
        s += char((n % 2) + '0');
        n /= 2;
    }

    reverse(s.begin(), s.end());

    return s;
}
bool palindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }

        l++;
        r--;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "NO";
        return 0;
    }

    string s = binary(n);

    if (palindrome(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}