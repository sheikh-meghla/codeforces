#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {

        if (a[i] == b[count]) {
            count++;
        }

        if (count == m) {
            break;
        }
    }

    if (count == m) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}