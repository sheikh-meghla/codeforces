#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int ans = n / 2;

        for (int i = 1; i <= ans; i++) {
            cout << 2 * i << " ";
        }

        int Even = 0;

        for (int i = 1; i <= ans; i++) {
            Even += 2 * i;
        }

        int Odd = 0;

        for (int i = 1; i < ans; i++) {
            int x = 2 * i - 1;
            cout << x << " ";
            Odd += x;
        }

        cout << Even - Odd << "\n";
    }

    return 0;
}