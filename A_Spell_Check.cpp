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

        char arr[] = "Timur";

        if (n == 5)
        {
            sort(c, c + n);
            sort(arr, arr + 5);

            bool flag = true;

            for (int i = 0; i < 5; i++)
            {
                if (c[i] != arr[i])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES\n";
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
    }

    return 0;
}