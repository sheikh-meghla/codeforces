#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        if (s.find(c) != string::npos) {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}