#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int digit = x % 10;
        int len;

        if (x < 10)
        {
            len = 1;
        }
        else if (x < 100)
        {
            len = 2;
        }
        else if (x < 1000)
        {
            len = 3;
        }
        else
        {
            len = 4;
        }

        int ans = (digit - 1) * 10 + len * (len + 1) / 2;

        cout << ans << endl;
    }

    return 0;
}