#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int f = n / 10;
        int s = n % 10;

        cout << f + s << endl;
    }

    return 0;
}