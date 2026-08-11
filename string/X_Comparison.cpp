#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = s;

    for (int i = 1; i < s.size(); i++) {
        string t = s;

        sort(t.begin(), t.begin() + i);
        sort(t.begin() + i, t.end());

        if (t < ans)
        {
            ans = t;
        }
    }

    cout << ans << endl;

    return 0;
}