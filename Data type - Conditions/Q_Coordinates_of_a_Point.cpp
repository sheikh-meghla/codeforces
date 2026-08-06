#include<bits/stdc++.h>

using namespace std;
using lf = double;
int main() {

    lf a,b;
    cin >> a>>b;
    if (a < 0 && b < 0)
    {
        cout << "Q3\n";
    }
    if (a > 0 && b > 0)
    {
        cout << "Q1\n";
    }
    if (a < 0 && b > 0)
    {
        cout << "Q2\n";
    }
    if (a > 0 && b < 0)
    {
        cout << "Q4\n";
    }
    
    return 0;
}