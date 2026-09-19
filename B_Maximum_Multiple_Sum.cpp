#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int mx = 0;
        int ans = 0;

        for (int x = 2; x <= n; x++) {
            int sum = 0;

            for (int i = x; i <= n; i += x) {
                sum += i;
            }

            if (sum > mx) {
                mx = sum;
                ans = x;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}