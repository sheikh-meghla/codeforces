#include <bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, pile;

    cin >> guest;
    cin >> host;
    cin >> pile;

    string s = guest + host;

    sort(s.begin(), s.end());
    sort(pile.begin(), pile.end());

    if (s == pile)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}