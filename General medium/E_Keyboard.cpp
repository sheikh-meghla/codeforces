#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    string s;

    cin >> c >> s;

    string k_b = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < k_b.size(); j++)
        {
            if (s[i] == k_b[j])
            {
                if (c == 'R')
                {
                    cout << k_b[j - 1];
                }
                else
                {
                    cout << k_b[j + 1];
                }

                break;
            }
        }
    }

    return 0;
}