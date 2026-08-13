#include<bits/stdc++.h>
using namespace std;

void print_digits(string s, int i) {
    if(i == s.size()) {
        return;
    }

    cout << s[i];

    if(i != s.size() - 1) {
        cout << " ";
    }

    print_digits(s, i + 1);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        print_digits(s, 0);
        cout << '\n';
    }

    return 0;
}