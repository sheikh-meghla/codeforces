#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int mn = min(a, b);
    int x = (max(a, b) - min(a, b)) / 2;

    cout << mn << " " << x << endl;

    return 0;
}