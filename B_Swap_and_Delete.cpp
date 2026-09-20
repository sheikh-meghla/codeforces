#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zero = 0;
        int one = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '0') {
                if (one > 0) {
                    one--;
                }
                else {
                    ans = s.size() - i;
                    break;
                }
            }
            else {
                if (zero > 0) {
                    zero--;
                }
                else {
                    ans = s.size() - i;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}