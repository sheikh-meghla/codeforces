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

        char mx = 'a';

        for (int i = 0; i < n; i++) {
            mx = max(mx, s[i]);
        }

        cout << mx - 'a' + 1 << endl;
    }

    return 0;
}

