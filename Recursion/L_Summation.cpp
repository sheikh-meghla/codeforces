#include <bits/stdc++.h>
using namespace std;

long long summation(int n, int arr[]) {
    if (n == 0) 
    {
        return 0;
    }

    return arr[n - 1] + summation(n - 1, arr);
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << summation(n, arr) << endl;

    return 0;
}