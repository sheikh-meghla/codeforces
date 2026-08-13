#include <iostream>
using namespace std;

long long log_two(long long n) {
    if (n <= 1) {
        return 0;
    }
    return 1 + log_two(n / 2);
}

int main() {

    long long n;
    cin >> n;

    cout << log_two(n) << "\n";

    return 0;
}
