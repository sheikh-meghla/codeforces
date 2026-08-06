#include<bits/stdc++.h>

using namespace std;

int main() {

    char x;
    cin >> x;
    if (x >= 48 && x <= 57)
    {
        cout <<"IS DIGIT\n"; 
    }
    if (x >= 65 && x <= 90)
    {
        cout <<"ALPHA\nIS CAPITAL\n"; 
    }
    if (x >= 97 && x <= 122)
    {
        cout <<"ALPHA\nIS SMALL\n"; 
    }
    
    return 0;
}