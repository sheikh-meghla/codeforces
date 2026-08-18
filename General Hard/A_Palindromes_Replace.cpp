#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    int l = 0;
    int r = s.size()-1;


    for(int i = 0; i < s.size(); i++) {
        if (s[l] == '?' && s[r] == '?')
        {
            s[l] = 'a';
            s[r] = 'a';
        }
        
        if (s[l] != s[r])
        {
            if (s[l] == '?')
            {
                s[l] = s[r];
            }
            else if (s[r] == '?')
            {
                s[r] = s[l];
            }
  
        }
        l++;
        r--; 
    }
    int count = 0;
    int s_i = 0;
    int e_i = s.size()-1;
    for(int i = 0; i < s.size()/2; i++) {

        if (s[s_i] == s[e_i])
        {
            count++;
        }
        s_i++;
        e_i--;
        
    }
    if (count == s.size()/2)
    {
        cout << s <<endl;
    }
    else{
        cout << -1 <<endl;
    }
    
    
    
    return 0;
}