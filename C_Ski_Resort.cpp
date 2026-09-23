#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long q;

        cin >> n >> k >> q;

        long long ans = 0;
        long long len = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x <= q) {
                len++;
            }
            else {
                if (len >= k) {
                    long long x = len - k + 1;
                    ans += x * (x + 1) / 2;
                }

                len = 0;
            }
        }

        if (len >= k) {
            long long x = len - k + 1;
            ans += x * (x + 1) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}