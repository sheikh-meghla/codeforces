#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    ll y = n/365;
    ll y1 = n%365;
    ll m = y1/30;
    ll m1 = y1 % 30;
    cout <<y<<" years\n"<<m<<" months\n"<<m1<<" days\n";

    
    return 0;
}