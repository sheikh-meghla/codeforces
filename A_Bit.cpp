#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        char s1 ,s2,s3;
        cin >> s1>> s2>>s3;
        if (s1 == 'X' && s2 == '+' && s3 == '+' || s1 == '+' && s2 == '+' && s3 == 'X')
        {
            sum++;
        }
        else
        {
            sum--;
        }
        
        
    }
    cout << sum << endl;
    
    return 0;
}