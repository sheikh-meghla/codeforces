#include<bits/stdc++.h>

using namespace std;

int main() {

    long long x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2>> x3 >> y3 >> x4 >> y4;
    if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1))
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}