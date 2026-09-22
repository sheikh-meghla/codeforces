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

        vector<int> l(n);
        vector<int> r(n);

        int count[26] = {};
        int x = 0;

        for (int i = 0; i < n; i++) {

            if (count[s[i] - 'a'] == 0) {
                x++;
            }

            count[s[i] - 'a']++;

            l[i] = x;
        }

        int count2[26] = {};
        x = 0;

        for (int i = n - 1; i >= 0; i--) {

            if (count2[s[i] - 'a'] == 0) {
                x++;
            }

            count2[s[i] - 'a']++;

            r[i] = x;
        }

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, l[i] + r[i + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}