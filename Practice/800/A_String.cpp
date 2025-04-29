#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    
    while(t--) {
        int cnt = 0;
        string s; cin >> s;
        for(char c : s) {
            if (c == '1') cnt++; 
        }
        cout << cnt << endl;
    }

    return 0;
}