#include <bits/stdc++.h>
using namespace std;

void even(int a[], int n, int i) {
    if (i >= n) {
        return;
    }

    even(a, n, i + 2);
    cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    even(a, n, 0);

    return 0;
}