#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 0;

    for (ll i = 1; i <= n; i++) {

        ll x = i;
        ll sum = 0;

        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        if (sum >= a && sum <= b) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}