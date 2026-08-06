#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll a,b,c,d;
    cin >> a>>b>>c>>d;
    ll first = a * b;
    ll second = c * d;
    ll x = first - second;
    cout << "Difference = "<< x <<endl;
    return 0;
}