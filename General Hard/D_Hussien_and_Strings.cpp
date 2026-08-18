#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    if (A.size() != B.size())
    {
        cout << "NO\n";
        return 0;
    }

    vector<int> diff;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != B[i])
        {
            diff.push_back(i);
        }
    }
    if (diff.size() == 0)
    {
        int freq[26] = {};

        for (char c : A)
        {
            freq[c - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] >= 2)
            {
                cout << "YES\n";
                return 0;
            }
        }

        cout << "NO\n";
    }
    else if (diff.size() == 2)
    {
        int i = diff[0];
        int j = diff[1];

        if (A[i] == B[j] && A[j] == B[i])
        {
            cout <<"YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}