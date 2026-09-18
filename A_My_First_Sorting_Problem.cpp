#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int tmp;
        if (a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
            
        }
        cout << a << " "<< b << endl;
        
    }
    
    return 0;
}