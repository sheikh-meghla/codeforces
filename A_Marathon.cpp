#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i] <= k) {
                k += b[i];
            }
        }

        cout << k << endl;
    }

    return 0;
}