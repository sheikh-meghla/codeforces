#include <bits/stdc++.h>
using namespace std;

void mx_mn(int n, int a[])
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < mn)
        {
            mn = a[i];
        }

        if(a[i] > mx)
        {
            mx = a[i];
        }
    }

    cout << mn << " " << mx;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mx_mn(n,a);

    return 0;
}