#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = 0;
        ll len = 1;

        for (int i = 0; i < n - 1; i++) {

            if (a[i] <= a[i + 1]) {
                len++;
            }
            else {
                ans += len * (len + 1) / 2;
                len = 1;
            }
        }

        ans += len * (len + 1) / 2;

        cout << ans << endl;
    }

    return 0;
}