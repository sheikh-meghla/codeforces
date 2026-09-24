#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x = n;
        int d = 0;

        while (x >= 10) {
            x /= 10;
            d++;
        }

        int ans = d * 9 + x;

        cout << ans << endl;
    }

    return 0;
}