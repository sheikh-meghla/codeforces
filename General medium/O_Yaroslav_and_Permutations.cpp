#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int freq[1001] = {};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        freq[x]++;
    }

    int maxFreq = 0;

    for (int i = 1; i <= 1000; i++)
    {
        maxFreq = max(maxFreq, freq[i]);
    }

    if (maxFreq <= (n + 1) / 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}