#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll a,b;
    cin >> a>>b;
    ll ans_f = floor((double)a / b);
    ll ans_c = ceil((double)a / b);
    ll ans_r = round((double)a / b);
    
    cout <<"floor "<<a<<" / "<<b<< " = "<< ans_f<<endl;
    cout <<"ceil "<<a<<" / "<<b<< " = "<< ans_c<<endl;
    cout <<"round "<<a<<" / "<<b<< " = "<< ans_r<<endl;
    return 0;
}