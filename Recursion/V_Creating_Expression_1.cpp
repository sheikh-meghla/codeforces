#include <bits/stdc++.h>
using namespace std;

bool creat(int index, long long sum, int n, long long x, vector<long long>& a)
{
    if (index == n)
    {
        return sum == x;
    }
    if (creat(index + 1, sum + a[index], n, x, a))
    {
        return true;
    }
    if (creat(index + 1, sum - a[index], n, x, a))
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    long long x;

    cin >> n >> x;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (creat(1, a[0], n, x, a))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}