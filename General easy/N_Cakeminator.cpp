#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    char a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int count_r = 0;
    int count_c = 0;

    // Count rows without S
    for (int i = 0; i < r; i++)
    {
        bool flag = true;

        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 'S')
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            count_r++;
        }
    }

    // Count columns without S
    for (int i = 0; i < c; i++)
    {
        bool flag = true;

        for (int j = 0; j < r; j++)
        {
            if (a[j][i] == 'S')
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            count_c++;
        }
    }

    int x = count_r * c;
    int y = count_c * r;

    int overlap = count_r * count_c;

    cout << x + y - overlap << endl;

    return 0;
}