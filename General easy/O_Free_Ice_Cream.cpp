#include<bits/stdc++.h>

using namespace std;

int main() {

    long long t, Total_Ice;
    cin >> t >> Total_Ice;
    long long count_m = 0;
    while (t--)
    {
        char C;
        long long N;
        cin >> C >> N;
        if (C == '+')
        {
            Total_Ice += N;
        }
        if (C == '-')
        {
            Total_Ice -= N;
            if (Total_Ice < 0)
            {
                count_m++;
                Total_Ice += N;

            }
            
        }
        
        
        
    }
    cout << Total_Ice <<" "<<count_m<<endl;

    
    return 0;
}