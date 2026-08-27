#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int t = 240 - k;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int ans = 5 * i;

        if (t >= ans) {
            t -= ans;
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}