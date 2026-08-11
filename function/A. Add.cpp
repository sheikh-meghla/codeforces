#include<bits/stdc++.h>

using namespace std;

int sum(int a,int b){
    int ans = a + b;
    return ans;
}
int main() {

    int a ,b;
    cin >> a >> b;
    int total = sum(a,b);
    cout << total<<endl;
    return 0;
}