#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    long long ncr = 1;
    long long npr = 1;

    for (int i = 1; i <= b; i++)
    {
        ncr = ncr * (a - i + 1) / i;
        npr = npr * (a - i + 1);
    }

    cout << ncr << " " << npr << endl;

    return 0;
}