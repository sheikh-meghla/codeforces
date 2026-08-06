#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll a,b;
    cin >> a>> b;
    a = a % 10;
    b = b % 10;
    ll sum = a + b;
    cout << sum <<endl;
    return 0;
}