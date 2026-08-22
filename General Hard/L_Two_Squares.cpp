#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double L, S1, S2;
    if (!(cin >> L >> S1 >> S2)) 
    {
        return 0;
    }
    int t;
    cin >> t;

    double speed = abs(S1 - S2);

    while (t--) {
        double q;
        cin >> q;

        double ans = (L - sqrt(q)) * sqrt(2) / speed;

        cout << fixed << setprecision(6) << ans << "\n";
    }

    return 0;
}