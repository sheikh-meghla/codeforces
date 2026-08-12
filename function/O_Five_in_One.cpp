#include <bits/stdc++.h>
using namespace std;

int getMax(int a[], int n)
{
    int mx = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }

    return mx;
}

int getMin(int a[], int n)
{
    int mn = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
    }

    return mn;
}

bool isPrime(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int countPrime(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
            count++;
    }

    return count;
}

bool isPalindrome(int x)
{
    int original = x;
    int reverse = 0;

    while (x > 0)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }

    return original == reverse;
}

int countPalindrome(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(a[i]))
            count++;
    }

    return count;
}

int countDivisors(int x)
{
    int count = 0;

    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;

            if (i != x / i)
            {
                count++;
            }
        }
    }

    return count;
}

int max_div_num(int a[], int n)
{
    int answer = a[0];
    int maxDivisors = countDivisors(a[0]);

    for (int i = 1; i < n; i++)
    {
        int divisors = countDivisors(a[i]);

        if (divisors > maxDivisors)
        {
            maxDivisors = divisors;
            answer = a[i];
        }
        else if (divisors == maxDivisors && a[i] > answer)
        {
            answer = a[i];
        }
    }

    return answer;
}

int main()
{
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The maximum number : " << getMax(a, n) << '\n';
    cout << "The minimum number : " << getMin(a, n) << '\n';
    cout << "The number of prime numbers : " << countPrime(a, n) << '\n';
    cout << "The number of palindrome numbers : " << countPalindrome(a, n) << '\n';
    cout << "The number that has the maximum number of divisors : " << max_div_num(a, n) << '\n';

    return 0;
}