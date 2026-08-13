#include<bits/stdc++.h>
using namespace std;

void n_to_one(int n) {
    if(n == 0) {
        return;
    }

    cout << n;

    if(n != 1) {
        cout << " ";
    }

    n_to_one(n - 1);
}

int main() {
    int n;
    cin >> n;

    n_to_one(n);

    return 0;
}