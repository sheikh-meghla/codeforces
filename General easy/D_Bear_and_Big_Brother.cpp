#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b;
    cin >> a >> b;
    int x = 0;
    while (1)
    {

        if (a > b)
        {
            cout << x << endl;
            break;
        }
        else
        {
            x++;
            a = a * 3;
            b = b * 2;
            
        }
        
    }
    
    
    return 0;
}