#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long sum = 3;

        while (n % sum != 0) {
            sum = sum * 2 + 1;
        }

        cout << n / sum << endl;
    }

    return 0;
}