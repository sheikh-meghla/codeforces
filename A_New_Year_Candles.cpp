#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hours = a;

    while (a >= b) {
        int new_candles = a / b;
        int remaining = a % b;

        a = new_candles + remaining;
        hours += new_candles;
    }

    cout << hours << endl;

    return 0;
}
