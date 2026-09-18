#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long h, m;
        cin >> h >> m;

        long long h1 = h * 60;
        long long sum = h1 + m;

        long long ans = 1440 - sum;
        cout << ans << endl;
    }
    
    return 0;
}