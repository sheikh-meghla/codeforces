#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < 100; i++)
    { 
       if (n>2)
       {
            if (n%2 == 0)
            {
                flag = true;
            }
       }   
    }
    if (flag == true)
    {
        cout<<"YES\n";
    }
    else{
        cout << "NO\n";  
    }
    return 0;
}