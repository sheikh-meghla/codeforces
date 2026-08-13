#include <bits/stdc++.h>
using namespace std;

int combination(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }

    int ans = combination(n - 1, r - 1) + combination(n - 1, r);
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << combination(n, r);

    return 0;
}