#include<bits/stdc++.h>

using namespace std;

int main() {

    string a,b;
    cin >> a >> b;
    string c = a + b;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a.size() <<" "<<b.size()<<endl;
    cout << c<<endl;
    cout << a <<" "<<b<<endl;
    return 0;
}