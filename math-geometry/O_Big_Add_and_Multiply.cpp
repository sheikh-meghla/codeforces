#include <bits/stdc++.h>
using namespace std;

string sum(string n) {
    int x = 9999;
    for (int i = n.size() - 1; i >= 0 && x > 0; i--) {
        int digit = n[i] - '0';

        int sum = digit + x;
        n[i] = (sum % 10) + '0';
        x = sum / 10;
    }
    while (x > 0) {
        n.insert(n.begin(), (x % 10) + '0');
        x /= 10;
    }
    return n;
}

string mul(string n) {
    string ans;
    int x = 0;

    for (int i = n.size() - 1; i >= 0; i--) {
        int digit = n[i] - '0';

        int mult = digit * 9999 + x;

        ans.push_back((mult % 10) + '0');
        x = mult / 10;
    }

    while (x > 0) {
        ans.push_back((x % 10) + '0');
        x /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string n;
    cin >> n;

    cout << sum(n) << '\n';
    cout << mul(n) << '\n';

    return 0;
}