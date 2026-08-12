#include <bits/stdc++.h>
using namespace std;

int distinct_num(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = distinct_num(arr, n);
    cout << ans << endl;

    return 0;
}