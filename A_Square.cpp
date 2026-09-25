#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < 4; i++) {
            int x, y;
            cin >> x >> y;

            mn = min(mn, x);
            mx = max(mx, x);
        }

        int ans = mx - mn;

        cout << ans * ans << endl;
    }

    return 0;
}
