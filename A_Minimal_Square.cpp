#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int x = min(a, b);
        int y = max(a, b);

        int ans = max(2 * x, y);

        cout << ans * ans << '\n';
    }

    return 0;
}