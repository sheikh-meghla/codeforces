#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mn = INT_MAX;
    int mx = INT_MIN;
    int min_index;
    int max_index;

    for(int i = 0; i < n; i++) {
        if (arr[i] < mn)
        {
            mn = arr[i];
            min_index = i;
        }     
    }

    for(int i = 0; i < n; i++) {
        if (arr[i] > mx)
        {
            mx = arr[i];
            max_index = i;
        }
    }
    arr[max_index] = mn;
    arr[min_index] = mx;
    for(int i = 0; i < n; i++) {
        
        
        cout << arr[i]<<" ";
    }


    return 0;
}