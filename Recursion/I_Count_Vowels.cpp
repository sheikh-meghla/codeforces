#include <bits/stdc++.h>
using namespace std;

int vowels(string s, int i) {
    if (i == s.size()) {
        return 0;
    }

    int count = vowels(s, i + 1);

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
        s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
        s[i] == 'O' || s[i] == 'U') {
        return count + 1;
    }

    return count;
}

int main() {
    string s;
    getline(cin, s);

    int ans = vowels(s, 0);

    cout << ans;

    return 0;
}