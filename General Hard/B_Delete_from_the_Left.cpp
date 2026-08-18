#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int i = s.size() - 1;
    int j = t.size() - 1;

    while (i >= 0 && j >= 0 && s[i] == t[j]) {
        i--;
        j--;
    }

    int c = s.size() - 1 - i;

    int ans = s.size() + t.size() - 2 * c;

    cout << ans << '\n';

    return 0;
}