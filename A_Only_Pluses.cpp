#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--) {

        int a, b, c;
        cin >> a >> b >> c;

        long long ans = 0;

        for(int i = 0; i <= 5; i++) {
            for(int j = 0; j <= 5; j++) {
                for(int k = 0; k <= 5; k++) {

                    if(i + j + k == 5) {

                        long long x = (a + i) * (b + j) * (c + k);

                        ans = max(ans, x);
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}