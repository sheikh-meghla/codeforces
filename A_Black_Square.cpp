#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    string s;
    cin >> s;

    int total = 0;

    for(int i = 0; i < s.size(); i++){

        if (s[i] == '1')
        {
            total += a[0];
        }
        else if (s[i] == '2')
        {
            total += a[1];
        }
        else if (s[i] == '3')
        {
            total += a[2];
        }
        else if (s[i] == '4')
        {
            total += a[3];
        }
        
            
    }

    cout << total << endl;
    return 0;
}