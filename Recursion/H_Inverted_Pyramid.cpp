#include <bits/stdc++.h>
using namespace std;

void pyramid(int row, int n) {
    if (row > n) {
        return;
    }

    
    pyramid(row + 1, n);
    for (int i = 0; i < n - row; i++) {
        cout << " ";
    }

    for (int i = 0; i < 2 * row - 1; i++) {
        cout << "*";
    }

    cout << '\n';
    
}

int main() {
    int n;
    cin >> n;

    pyramid(1, n);

    return 0;
}