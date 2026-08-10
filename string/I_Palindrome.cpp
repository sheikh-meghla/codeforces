#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    bool flag = true;
    int l = 0;
    int r = s.size()-1;
    while (l < r)
    {
        if (s[l] != s[r])
            {
                flag = false;
                break;
            }
            l++;
            r--;
    }
    
            

    if (flag)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}