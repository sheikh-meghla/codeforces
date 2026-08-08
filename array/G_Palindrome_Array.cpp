#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool flag = true;

    int l = 0;
    int r = n-1;
    while (l<r)
    {
        if (a[l] != a[r])
        {
            flag = false;
            break;
        }
        else
        {
            l++;
            r--;
        }
    
        
    }
    if (flag == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    
    return 0;
}
