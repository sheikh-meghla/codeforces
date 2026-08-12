#include<bits/stdc++.h>

using namespace std;
void average(int n,double arr[]){
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double ans = sum / (double)n;
    cout <<fixed <<setprecision(7)<<ans<<endl;
}
int main() {

    int n;
    cin >> n;
    double arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    average(n,arr);
    
    
    return 0;
}