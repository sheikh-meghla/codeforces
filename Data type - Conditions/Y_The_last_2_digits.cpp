#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long ans = 1;
    ans = (ans * (A % 100)) % 100;
    ans = (ans * (B % 100)) % 100;
    ans = (ans * (C % 100)) % 100;
    ans = (ans * (D % 100)) % 100;

    if (ans < 10)
    {
        cout << "0" << ans << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}