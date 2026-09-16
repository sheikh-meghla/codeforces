#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n + 1);

    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }

    int ans = 1;

    while (ans < t) {
        ans = ans + a[ans];
    }

    if (ans == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}