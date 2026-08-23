#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    int arr[] = {100, 20, 10, 5, 1};

    int i = 0;

    while (i < 5) {
        count += n / arr[i];
        n %= arr[i];

        i++;
    }

    cout << count;

    return 0;
}