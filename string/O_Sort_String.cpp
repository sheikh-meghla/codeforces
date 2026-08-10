#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[26] = {};

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;

        arr[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << char(i + 'a');
        }
    }

    return 0;
}