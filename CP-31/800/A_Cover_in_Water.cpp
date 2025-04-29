#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cont3 = 0, empty = 0;
        for(int i = 0; i < n; i++) {
            if(i != 0 && i != n -1 && s[i -1] == '.' && s[i] == '.' && s[i + 1] == '.' ) {
                cont3 = 1;
                break;
            }
            if(s[i] == '.') {
                empty++;
            }
        }
        
        int ans = (cont3 == 1) ? 2 : empty;
        cout << ans << endl;

    }
    return 0;
}