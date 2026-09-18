#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (i % 2 == 0 && x % 2 == 1) {
                even++;
            }

            if (i % 2 == 1 && x % 2 == 0) {
                odd++;
            }
        }

        if (even != odd) {
            cout << -1 << endl;
        }
        else {
            cout << even << endl;
        }
    }

    return 0;
}