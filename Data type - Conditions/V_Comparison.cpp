#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b;
    char x;
    cin >> a >> x >> b;

    bool flag = false;
    if (x == '<')
    {
        if (a < b)
        {
            
            flag = true;
        }
        
        
    }
    else if (x == '>')
    {
        if (a > b)
        {
            flag = true;
        }    
    }
    else if (x == '=')
    {
        if (a == b)
        {
            flag = true;
        }    
    }
    if (flag == true)
    {
        cout << "Right\n";
    }
    else{
        cout <<"Wrong\n";
    }
    
    
    return 0;
}