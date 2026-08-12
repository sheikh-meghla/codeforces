#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += log10(i);
    }

    long long count = floor(sum) + 1;
    cout << "Number of digits of " << n << "! is " << count << "\n";

    return 0;
}