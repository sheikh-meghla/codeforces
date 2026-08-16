#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    char current = 'a';
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        
        char c = s[i];
        int x = abs(current - c);
        int move = min(x, 26 - x);
        ans += move;
        current = c;
    }

    cout << ans << endl;

    return 0;
}