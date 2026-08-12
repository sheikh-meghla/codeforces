#include<bits/stdc++.h>

using namespace std;
void new_arr(int n,int a[],int b[]){
    for(int i = 0; i < n; i++) {
        cout << b[i]<<" ";
    }
    for(int i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }
}
int main() {

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    new_arr(n,a,b);
    return 0;
}