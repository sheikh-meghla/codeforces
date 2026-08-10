#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--) {
        string name;
        cin >> name;

        if (name == "pop_back") {
            s.pop_back();
        }

        else if (name == "front") {
            cout << s.front() << '\n';
        }

        else if (name == "back") {
            cout << s.back() << '\n';
        }

        else if (name == "sort") {
            int l, r;
            cin >> l >> r;

            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (name == "reverse") {
            int l, r;
            cin >> l >> r;

            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (name == "print") {
            int pos;
            cin >> pos;

            cout << s[pos - 1] << '\n';
        }
        else if (name == "substr") {
            int l, r;
            cin >> l >> r;

            cout << s.substr(l - 1, r - l + 1) << '\n';
        }
        else if (name == "push_back") {
            char x;
            cin >> x;

            s.push_back(x);
        }
    }

    return 0;
}

