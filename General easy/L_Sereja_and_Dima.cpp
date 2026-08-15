#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0;
    int r = n -1;
    
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < n; i++) {
        int x;
        if (arr[l] > arr[r])
        {
            x = arr[l];
            l++;
        }
        else
        {
            x = arr[r];
            r--;
        }
        if (i % 2 == 0)
        {
            sum1 += x;
        }
        else
        {
            sum2 += x;
        }
        
        
        
        
    }
    cout << sum1 <<" "<<sum2<<endl;


    return 0;
}