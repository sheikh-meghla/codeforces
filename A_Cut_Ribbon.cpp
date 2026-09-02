#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;

    for (int i = 0; i <= n / a; i++) {

        for (int j = 0; j <= n / b; j++) {

            int r = n - i * a - j * b;

            if (r >= 0 && r % c == 0) {

                int k = r / c;

                ans = max(ans, i + j + k);
            }
        }
    }

    cout << ans << endl;

    return 0;
}