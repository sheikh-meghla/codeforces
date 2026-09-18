#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i] ;   
        }
        int b[n];
        for(int j = 0; j < n; j++){
            cin >> b[j]; 
        }

        sort(a,a+n);
        sort(b, b + n, greater<int>());

        for(int i = 0; i < k; i++){
            if (b[i] > a[i]) {
                swap(a[i], b[i]);
            }   
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];   
        }
        cout << sum << endl;
    }
    
    return 0;
}