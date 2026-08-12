#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int a[100][100];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int rb, cb;
    cin >> rb >> cb;

    int B[100][100];

    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            int sum = 0;

            for (int k = 0; k < c; k++)
            {
                sum += a[i][k] * B[k][j];
            }

            cout << sum;

            if (j < cb - 1)
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}