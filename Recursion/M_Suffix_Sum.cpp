#include <bits/stdc++.h>
using namespace std;

long long suffix_sum(int index, int m, int arr[]) {

    if (m == 0) {
        return 0;
    }

    return arr[index] + suffix_sum(index - 1, m - 1, arr);
}

int main() {

    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << suffix_sum(n - 1, m, arr) << endl;

    return 0;
}