#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    int counter = 0;

    if(n==2){
        cout << "YES\n";
        return 0;
    }

    for (ll i = 1; i <= 3; i++)
    {
 
            if (n % i == 0)
            {
                counter++;
            }
              
    }

    if (counter == 1)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
    return 0;
}