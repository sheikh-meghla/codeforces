#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[count]) {
            count++;
        }  
    }

    if (count == target.size()) {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";

    }
    
    return 0;
}