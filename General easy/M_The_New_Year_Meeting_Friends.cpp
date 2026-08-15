#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[3];
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    int mx = INT_MIN;
    int mn = INT_MAX;

    int max_index;
    int min_index;

    for(int i = 0; i < 3; i++) {
        if (mx < arr[i])
        {
            mx = arr[i];
            max_index = i;

            
        }
        if (mn > arr[i])
        {
            mn = arr[i];
            min_index = i;
        }   
    } 


    int olos_bondhu = 3 - (min_index + max_index);

    int sum = (arr[max_index] - arr[olos_bondhu]) + abs((arr[min_index] - arr[olos_bondhu]));

    cout << sum << endl;
    

    
    
    return 0;
}