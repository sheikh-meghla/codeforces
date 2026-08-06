#include<bits/stdc++.h>

using namespace std;

int main() {

    char x;
    cin >> x;
    
    if (x >= 65 && x <= 90)
    {
        x = x + 32;
        
    }
    else{
        x = x - 32;

    }
    cout <<x<<endl; 
    return 0;
}