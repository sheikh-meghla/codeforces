#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    int i = 0;
    while (i < rev.size() && rev[i] == '0')
        i++;

    if (i == rev.size())
    {
        cout << 0 << endl;
    }
    else
    {
        cout << rev.substr(i) << endl;
    }

    if (s == rev)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}