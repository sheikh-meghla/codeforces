#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (char i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < n; j++) {
            if (tolower(s[j]) == i) {
                count++;
                break;
            }
        }
    }

    if (count == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}