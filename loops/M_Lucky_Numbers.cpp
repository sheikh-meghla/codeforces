#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool found = false;

    for (int i = a; i <= b; i++)
    {
        int x = i;
        bool lucky = true;

        while (x > 0)
        {
            int digit = x % 10;

            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }

            x /= 10;
        }

        if (lucky == true)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (found==false)
    {
        cout << -1;
    }

    return 0;
}