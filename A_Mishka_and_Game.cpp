#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int sum_m = 0;
    int sum_c = 0;
    int M,C;

    while (t--)
    {
        
        cin >> M >> C;
        if (M > C)
        {
            sum_m++;
        }
        else if (C > M)
        {
            sum_c++;
        }
        
        

    }

    if(sum_m == sum_c)
    {
        cout << "Friendship is magic!^^\n";
    }
    else if (sum_m > sum_c)
    {
        cout << "Mishka\n";
    }
    else if (sum_c > sum_m)
    {
        cout << "Chris\n";
    }
    
    
    
    
    
    return 0;
}