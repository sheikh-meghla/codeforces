#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }

    return 0;
}