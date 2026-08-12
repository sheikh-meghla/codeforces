#include <bits/stdc++.h>
using namespace std;

void shiftright(vector<int>& a, int x)
{
    int n = a.size();
    x = x % n;
    while (x--)
    {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    shiftright(a, x);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}