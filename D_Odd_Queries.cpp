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
            cin >> a[i]; 
        }

         
        while (k--)
        {
            int l, r, c;
            cin >> l >> r >> c;

            for(int j = l-1; j < r; j++){
                a[j] = c;   
            }

            long long sum_a = 0;
            
            for(int i = 0; i < n; i++){
                sum_a += a[i];
            }

            if (sum_a % 2 != 0)
            {
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
            
            
        }

        
        
    }
    
    return 0;
}