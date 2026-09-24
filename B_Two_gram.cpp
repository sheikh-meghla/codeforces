#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count[26][26] = {};

    for (int i = 0; i < n - 1; i++) {
        int a = s[i] - 'A';
        int b = s[i + 1] - 'A';

        count[a][b]++;
    }

    int mx = 0;
    string ans;

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (count[i][j] > mx) {
                mx = count[i][j];

                ans = "";
                ans += char(i + 'A');
                ans += char(j + 'A');
            }
        }
    }

    cout << ans << endl;

    return 0;
}