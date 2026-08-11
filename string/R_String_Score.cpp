#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long score = 0;

    int l = 0;
    int r = n;

    string q = s;

    while (l < r) {

        char c = q[l];
        l++;

        if (c == 'V') {
            score += 5;
        }

        else if (c == 'W') {
            score += 2;
        }

        else if (c == 'X') {
            if (l < r) {
                l++;
            }
        }

        else if (c == 'Y') {
            if (l < r) {
                q.push_back(q[l]);
                r++;
                l++;
            }
        }

        else if (c == 'Z') {

            if (l < r) {

                if (q[l] == 'V') {
                    score /= 5;
                    l++;
                }

                else if (q[l] == 'W') {
                    score /= 2;
                    l++;
                }
            }
        }
    }

    cout << score << endl;

    return 0;
}