#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> a;

        int l = 0;
        int r = n - 1;

        while (l <= r) {
            a.push_back(b[l]);
            l++;

            if (l <= r) {
                a.push_back(b[r]);
                r--;
            }
        }

        for (int x : a) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
