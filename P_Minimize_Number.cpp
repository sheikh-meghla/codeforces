#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    while (1) {

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                flag = false;
                break;
            }
        }

        if (flag == false) {
            break;
        }
        for (int i = 0; i < n; i++) {
            arr[i] /= 2;
        }

        count++;
    }

    cout << count << endl;

    return 0;
}