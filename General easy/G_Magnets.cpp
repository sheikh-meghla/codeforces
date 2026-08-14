#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int c = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}