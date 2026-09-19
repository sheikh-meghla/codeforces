#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        bool flag = true;

        for (int i = 0; i < n; i++) {

            if (a[i] == b[i]) {
                continue;
            }

            if ((a[i] == 'G' && b[i] == 'B') ||
                (a[i] == 'B' && b[i] == 'G')) {
                continue;
            }

            flag = false;
            break;
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


        }

    return 0;
}