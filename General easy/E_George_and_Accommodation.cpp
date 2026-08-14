#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int pi,qi;
        cin >> pi >> qi;
        
        if (qi-2 >= pi)
        {
            count++;
        }
        
    }
    cout << count << endl;
    
    return 0;
}