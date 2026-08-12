#include <bits/stdc++.h>
using namespace std;

void matrix_swaping(vector<vector<int>>& a, int x, int y) {
    int n = a.size();

    swap(a[x], a[y]);
    for (int i = 0; i < n; i++) {
        swap(a[i][x], a[i][y]);
    }
}
int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    x--;
    y--;
    matrix_swaping(a, x, y);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}