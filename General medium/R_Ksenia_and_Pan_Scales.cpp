#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, x;
    cin >> s >> x;

    int p = s.find('|');

    int left = p;
    int right = s.size() - p - 1;
    int extra = x.size();

    int total = left + right + extra;

    if (total % 2 != 0)
    {
        cout << "Impossible";
        return 0;
    }

    int need = total / 2;

    if (left > need || right > need)
    {
        cout << "Impossible";
        return 0;
    }

    int leftNeed = need - left;

    string L = x.substr(0, leftNeed);
    string R = x.substr(leftNeed);

    cout << s.substr(0, p) + L << "|" << R + s.substr(p + 1);

    return 0;
}