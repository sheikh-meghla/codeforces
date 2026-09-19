#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 2){
                count++;
            }
        }
        if(count % 2 != 0){
            cout << -1 << endl;
        }
        else if(count == 0){
            cout << 1 << endl;
        }

        else
        {
            int need = count / 2;
            int cnt = 0;

            for(int i = 0; i < n - 1; i++){

                if(a[i] == 2){
                    cnt++;
                }

                if(cnt == need){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}