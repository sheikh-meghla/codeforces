#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int s[4];

        for (int i = 0; i < 4; i++) {
            cin >> s[i];
        }

        int mx1 = max(s[0], s[1]);
        int mx2 = max(s[2], s[3]);

        int first = max(mx1, mx2);
        int second = min(mx1, mx2);

        int arr[4];

        for (int i = 0; i < 4; i++) {
            arr[i] = s[i];
        }

        sort(arr, arr + 4);

        if (first == arr[3] && second == arr[2]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}