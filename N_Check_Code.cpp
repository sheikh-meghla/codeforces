#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    bool flag = true;

    for (int i = 0; i < s.size(); i++) {
        if (i == a) {
            if (s[i] != '-') {
                flag = false;
            }
        }
        else {
            if (s[i] < '0' || s[i] > '9') {
                flag = false;
            }
        }
    }

    if (flag == true) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}