#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int pre = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            int sub = a - pre;

            if (sub > ans) {
                ans = sub;
            }

            pre = a;
        }

        int last_sub = (x - pre) * 2;

        if (last_sub > ans) {
            ans = last_sub;
        }

        cout << ans << endl;
    }

    return 0;
}