#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int d = n;
    int s = n;

    while (s >= m) {
        s -= m;
        d++;
        s++;
    }

    cout << d << endl;

    return 0;
}