#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    cin >>a >> b>> c;
    if (a+b > c && a+c > b && b+c > a)
    {
        cout << "Valid\n";
        double s = (a + b + c)/2.00;
        double ans = sqrt(s * (s-a)*(s-b)*(s-c));
        cout << fixed<< setprecision(6)<<ans<<endl;
    }
    else{
        cout << "Invalid\n";
    }
    
    return 0;
}