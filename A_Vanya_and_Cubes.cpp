#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int h = 0;
    int c = 0;
    int l = 1;

    while (c + l * (l + 1) / 2 <= n) {
        c += l * (l + 1) / 2;
        h++;
        l++;
    }

    cout << h << endl;

    return 0;
}