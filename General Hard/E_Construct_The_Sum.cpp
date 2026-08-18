#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;

        long long maxSum = n * (n + 1) / 2;

        if (s > maxSum) {
            cout << -1 << '\n';
            continue;
        }

        long long ans[100005];
        int k = 0;

        for (long long i = n; i >= 1; i--) {

            if (s >= i) {
                ans[k] = i;
                k++;

                s -= i;
            }

            if (s == 0)
            {
                break;
            }
        }

        if (s != 0) 
        {
            cout << -1 << '\n';
        }
        else {
            cout << k;

            for (int i = 0; i < k; i++) {
                cout << " " << ans[i];
            }

            cout << '\n';
        }
    }

    return 0;
}