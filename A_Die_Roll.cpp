#include <bits/stdc++.h>
using namespace std;

int gcd_fun(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    int y, w;
    cin >> y >> w;

    int mx = max(y, w);

    int numerator = 7 - mx;
    int denominator = 6;

    int g = gcd_fun(numerator, denominator);

    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator;

    return 0;
}