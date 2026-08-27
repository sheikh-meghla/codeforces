#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;

    int h = x;
    int l = x;
    int count = 0;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x > h) {
            count++;
            h = x;
        }
        else if (x < l) {
            count++;
            l = x;
        }
    }

    cout << count << endl;

    return 0;
}