#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int mn = min(2 * a, b);

        int ans = (n / 2) * mn;

        if (n % 2 == 1) {
            ans += a;
        }

        cout << ans << '\n';
    }

    return 0;
}