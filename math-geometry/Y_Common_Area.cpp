#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) 
    {
        int n;
        cin >> n;

        int maxX1 = -1000000000;
        int minX2 =  1000000000;

        int maxY1 = -1000000000;
        int minY2 =  1000000000;

        for (int i = 0; i < n; i++) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            maxX1 = max(maxX1, x1);
            minX2 = min(minX2, x2);

            maxY1 = max(maxY1, y1);
            minY2 = min(minY2, y2);
        }
        int w = minX2 - maxX1;
        int h = minY2 - maxY1;

        int area = 0;
        if (w > 0 && h > 0) {
            area = w * h;
        }

        cout << "Case #" << i << ": " << area << '\n';
    }

    return 0;
}