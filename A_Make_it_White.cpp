#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int f = -1;
        int l = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (f == -1)
                    f = i;

                l = i;
            }
        }

        cout << l - f + 1 << endl;
    }

    return 0;
}