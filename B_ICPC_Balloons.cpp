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

        char c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
    
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            bool found = false;

            for (int j = 0; j < i; j++)
            {
                if (c[i] == c[j])
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                count++;
            }
        }

        int sub = n - count;
        int x = count * 2;
        int ans = x + sub;
        cout << ans << endl;

        }
    

    return 0;
}