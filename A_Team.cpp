#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    int f1,f2,f3;
    int sum = 0;
    int count = 0;
    while (t--)
    {
        
        cin >> f1 >> f2 >> f3;
        sum = f1 + f2 + f3;

        if (sum >= 2)
        {
            count++;
        }    
        
    }
    cout << count <<endl;
    
    return 0;
}