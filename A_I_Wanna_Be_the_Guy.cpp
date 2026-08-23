#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    int x[100];

    for (int i = 0; i < p; i++) {
        cin >> x[i];
    }

    int q;
    cin >> q;

    int y[100];

    for (int i = 0; i < q; i++) {
        cin >> y[i];
    }

    for (int i = 1; i <= n; i++) {

        bool flag = false;

        for (int j = 0; j < p; j++) {
            if (x[j] == i)
            {
                flag = true;
            }
        }

        for (int j = 0; j < q; j++) {
            if (y[j] == i)
            {
                flag = true;
            }
        }

        if (flag == false) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}