#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int primary_sum = 0;
    int secondary_sum = 0;
    for (int i = 0; i < n; i++) {
        primary_sum += a[i][i];
        secondary_sum += a[i][n - 1 - i];
    }
    int ans = abs(primary_sum - secondary_sum);
    cout << ans << endl;

    
    return 0;
}