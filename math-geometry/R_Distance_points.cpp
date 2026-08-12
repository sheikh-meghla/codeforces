#include<bits/stdc++.h>

using namespace std;

int main() {

    long long x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double ans = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
    double f_ans = sqrt(ans);
    cout << fixed<<setprecision(9)<<f_ans<<endl;
    return 0;
}