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

        bool flag = true;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                for (int j = 0; j < i - 1; j++) {
                    if (s[j] == s[i]) {
                        flag = false;
                    }
                }
            }
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
