#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    int police = 0;
    int oporath = 0;

    for(int i = 0; i < t; i++) {
        int s;
        cin >> s;
        if (s == -1)
        {
            if (police > 0)
            {
                police--;
            }
            else{
                oporath++;
            }
            
        }
        else
        {
            police += s;
        }
        
        
    }
    cout << oporath <<endl;
    return 0;
}