#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a, b, s;
    int count_a = 0, count_b = 0;

    cin >> a;
    count_a++;

    for (int i = 1; i < n; i++)
    {
        cin >> s;

        if (s == a)
        {
            count_a++;
        }
        else
        {
            if (b == "")
                b = s;

            count_b++;
        }
    }

    if (count_a > count_b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}