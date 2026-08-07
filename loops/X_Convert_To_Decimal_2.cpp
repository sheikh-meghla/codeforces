#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int count = 0;
        while (n > 0) {
            if (n % 2 == 1)
            {
                count++;
            }
            n /= 2;
        }

        long long ans = (1LL << count) - 1;

        cout << ans << endl;
    }

    return 0;
}