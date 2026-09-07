#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int freq[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] == 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }

       
    }

    return 0;
}