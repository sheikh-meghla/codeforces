#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> r(2 * n + 1);

    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> r[i];
    }

    for (int i = 1; i < 2 * n; i += 2)
    {
        if (k == 0)
        {
            break;
        }

        if (r[i] > r[i - 1] && r[i] > r[i + 1])
        {
            r[i]--;

            if (r[i] > r[i - 1] && r[i] > r[i + 1])
            {
                k--;
            }
            else
            {
                r[i]++;
            }
        }
    }

    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << r[i] << " ";
    }

    return 0;
}