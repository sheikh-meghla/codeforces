#include <bits/stdc++.h>
using namespace std;

void left_max(int i, int n, long long mx, vector<long long>& a)
{
    if (i == n)
    {
        return;
    }

    mx = max(mx, a[i]);

    cout << mx << " ";

    left_max(i + 1, n, mx, a);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    left_max(0, n, LLONG_MIN, a);

    return 0;
}