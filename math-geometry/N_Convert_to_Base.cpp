#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    int x;

    cin >> s >> x;

    if (t == 1)
    {
        long long result = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            int d;

            if (c >= '0' && c <= '9')
            {
                d = c - '0';
            }
            else
            {
                d = c - 'A' + 10;
            }

            result = result * x + d;
        }

        cout << result << endl;
    }
    else
    {
        long long n = stoll(s);
        string answer = "";

        while (n > 0)
        {
            int remainder = n % x;

            char c;

            if (remainder < 10)
            {
                c = '0' + remainder;
            }
            else
            {
                c = 'A' + (remainder - 10);
            }

            answer += c;

            n /= x;
        }
        reverse(answer.begin(), answer.end());
        cout << answer << endl;
    }

    return 0;
}