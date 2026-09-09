#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int single = n * a;
    int full = (n / m) * b;
    int remaining = (n % m) * a;
    int option1 = full + remaining;
    int option2 = ((n + m - 1) / m) * b;

    cout << min({single, option1, option2}) << endl;

    return 0;
}