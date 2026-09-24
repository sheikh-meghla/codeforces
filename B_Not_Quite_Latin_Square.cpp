#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char a, b, c;

        for (int i = 0; i < 3; i++) {
            cin >> a >> b >> c;

            if (a == '?') {
                if (b == 'A' && c == 'B' || b == 'B' && c == 'A')
                {
                    cout << 'C' << endl;
                }
                else if (b == 'A' && c == 'C' || b == 'C' && c == 'A')
                {
                    cout << 'B' << endl;
                }
                else
                {
                    cout << 'A' << endl;
                }
            
            }

            if (b == '?') {
                if (a == 'A' && c == 'B' || a == 'B' && c == 'A')
                {
                    cout << 'C' << endl;
                }
                else if (a == 'A' && c == 'C' || a == 'C' && c == 'A')
                {
                    cout << 'B' << endl;
                }
                else
                {
                    cout << 'A' << endl;
                }
            }

            if (c == '?') {
                if (a == 'A' && b == 'B' || a == 'B' && b == 'A')
                {
                    cout << 'C' << endl;
                }
                else if (a == 'A' && b == 'C' || a == 'C' && b == 'A')
                {
                    cout << 'B' << endl;
                }
                else
                {
                    cout << 'A' << endl;
                }
            }
        }
    }

    return 0;
}