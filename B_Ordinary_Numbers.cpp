#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);

        int digit = s[0] - '0';
        int len = s.size();

        int num = 0;

        for (int i = 0; i < len; i++) {
            num = num * 10 + digit;
        }

        int ans = (len - 1) * 9;

        if (num <= n) {
            ans += digit;
        }
        else {
            ans += digit - 1;
        }

        cout << ans << endl;
    }

    return 0;
}
