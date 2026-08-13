#include <bits/stdc++.h>
using namespace std;

void sum_matrix(int row, int col, int r, int c, int a[][100], int b[][100]) {

    if (row == r)
        return;

    cout << a[row][col] + b[row][col];

    if (col + 1 < c) {
        cout << " ";
        sum_matrix(row, col + 1, r, c, a, b);
    }
    else {
        cout << '\n';
        sum_matrix(row + 1, 0, r, c, a, b);
    }
}

int main() {

    int r, c;
    cin >> r >> c;

    int a[100][100], b[100][100];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    sum_matrix(0, 0, r, c, a, b);

    return 0;
}