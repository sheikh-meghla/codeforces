#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];

    }
    int mn = INT_MAX;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if (a[i]<mn)
        {
            mn = a[i];
        }
        
    }
    for(int i = 0; i < n; i++) {
        if (mn == a[i])
        {
            count++;
        }
        
    }
    if (count % 2 == 0)
    {
        cout << "Unlucky\n";
    }
    else{
        cout << "Lucky\n";
    }
    

    return 0;
}