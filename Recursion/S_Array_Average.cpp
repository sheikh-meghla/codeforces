#include<bits/stdc++.h>

using namespace std;
double average(int n,int arr[]){

    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double ans = (double)sum / n;
    cout <<fixed<<setprecision(6)<< ans <<endl;
    return 0;
}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    average(n,arr);
    return 0;
}