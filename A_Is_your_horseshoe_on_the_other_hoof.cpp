#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int same = 0;

    if (a == b || a == c || a == d)
    {
        same++;
    }

    if (b == c || b == d)
    {
        same++;
    }

    if (c == d)
    {
        same++;
    }

    cout << same << '\n';

    return 0;
}