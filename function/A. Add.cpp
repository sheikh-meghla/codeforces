#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int sum(int a,int b){
    ll ans = a + b;
    return ans;
}
int main() {

    int a ,b;
    cin >> a >> b;
    ll total = sum(a,b);
    cout << total<<endl;
    return 0;
}