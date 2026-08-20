#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, h;
    cin >> n >> h;

    int w = 0;

    for (int i = 0; i < n; i++) {

        int a;
        cin >> a;

        if (a <= h) {
            w += 1;
        }
        else {
            w += 2;
        }
    }

    cout << w << '\n';

    return 0;
}