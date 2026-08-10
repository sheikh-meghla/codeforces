#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0;
    int r = 1;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if (a[l] != a[r])
        {
            count++;
        }
        l++;
        r++;
        
    }
    cout << count<<endl;
    return 0;
}