#include <bits/stdc++.h>

using namespace std;

void shift_zero(int n, int a[])
{
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[l] = a[i];
            l++;
        }
    }
    while (l < n)
    {
        a[l] = 0;
        l++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    shift_zero(n, a);

    return 0;
}