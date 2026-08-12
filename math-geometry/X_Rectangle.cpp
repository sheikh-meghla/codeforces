#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2
        >> x3 >> y3 >> x4 >> y4;

    int minx = min({x1, x2, x3, x4});
    int maxx = max({x1, x2, x3, x4});

    int miny = min({y1, y2, y3, y4});
    int maxy = max({y1, y2, y3, y4});

    int n;
    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;

        if (x >= minx && x <= maxx && y >= miny && y <= maxy) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}