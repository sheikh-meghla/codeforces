#include<bits/stdc++.h>

using namespace std;

int main() {

    bool flag = false;
    long long a,b,c;
    char s,e;
    cin >> a >> s >> b >> e >> c;
    long long ans;
    if (s == '+')
    {
        ans = a + b;
        if (ans == c)
        {          
            flag = true;
        }
        
    }
    else if (s == '-')
    {
        ans = a - b;
        if (ans == c)
        {
            flag = true;
        }
        
    }
    else if (s == '*')
    {
        ans = a * b;
        if (ans == c)
        {
            flag = true;
        }
        
    }
    if (flag == true)
    {
        cout << "Yes\n";
    }
    else{
        cout <<ans<<endl;
    }
    
    return 0;
}