#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 1.0;

    for(int i = 0; i < n; i++) {
        double a;
        cin >> a;
        ans *= pow(a, 1.0 / n); 
    }

    long long x = floor(ans) + 1;

    cout << x << endl;

    return 0;
}