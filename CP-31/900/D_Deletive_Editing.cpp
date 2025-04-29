#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    vl vis(26, 0);
    ll l = s1.size() -1, r = s2.size() -1;
    while(l >= 0) {
        if(s1[l] == s2[r] && vis[s2[r] - 'A'] == 0) r--;
        else vis[s1[l] - 'A'] = 1;
        l--;
    }
    if(r == -1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}