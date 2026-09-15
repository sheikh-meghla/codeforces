#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;

        cin >> n >> k;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int c = 1;
        int l = 1;

        for (int i = 1; i < n; i++) {

            if (a[i] - a[i - 1] <= k) {
                c++;
            }
            else {
                c = 1;
            }

            l = max(l, c);
        }

        cout << n - l << endl;
    }

    return 0;
}