#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;

        int x = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                ans.push_back(digit * x);
            }

            n = n / 10;
            x = x * 10;
        }

        cout << ans.size() << endl;

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}