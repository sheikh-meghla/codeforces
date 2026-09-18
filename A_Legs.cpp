#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = n / 4;
        int x = n % 4;
        int y = x / 2;
        cout << ans + y << endl;
  
    }
    
    return 0;
}