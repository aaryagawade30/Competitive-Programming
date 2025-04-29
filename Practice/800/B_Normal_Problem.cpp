#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        unordered_map<char, char> mp;
        mp['p'] = 'q';
        mp['q'] = 'p';
        mp['w'] = 'w';

        string s; cin >> s;
        string ans = "";
        for(int i = 0; i < s.size(); i++) {
            if(mp.find(s[i]) != mp.end()) {
                ans += mp[s[i]];
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}