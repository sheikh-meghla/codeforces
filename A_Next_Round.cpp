#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    
    int count = 0;


    for (int i = 1; i <= n; i++)
    {
           
            if (a[i] >= a[k])
            {
                if(a[i] != 0)
                {
                    count++;
                }
            }
        
        
    }

    int x = 0;

    for(int i = 1; i <= n; i++) {
        if(a[i] = 0){
            x++;
        }
    }

    if(x==n){
        count = 0;
    }




    cout << count << endl;

    return 0;
}