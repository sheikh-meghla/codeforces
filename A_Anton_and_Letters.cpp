#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int freq[26] = {0};

    int i = 0;

    while (i < s.size()) {

        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }

        i++;
    }

    int ans = 0;
    i = 0;

    while (i < 26) {
        if (freq[i] > 0) {
            ans++;
        }

        i++;
    }

    cout << ans;

    return 0;
}