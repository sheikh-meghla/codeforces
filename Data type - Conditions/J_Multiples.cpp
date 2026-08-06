#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll a,b;
    cin >> a>>b;
    if (a%b==0 || b%a==0)
    {
        cout << "Multiples\n";
    }
    else{
        cout <<"No Multiples\n";
    }
    
    return 0;
}