#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll cnt10 = 0, cnt01 = 0;
    
    ll ans = n + (s[0] == '1');

    for(ll i = 0; i < n -1; i++) {
        if(s[i] != s[i +1]) ans++;
        if(s[i] == '0' && s[i +1] == '1') cnt01++;
        if(s[i] == '1' && s[i +1] == '0') cnt10++;
    }

    if(cnt01 >= 2 || cnt10 >= 2) ans -= 2;
    else if(cnt01 >= 1 || cnt10 >= 1 || s[0] == '1') ans = n +1;
    else ans = n;

    cout << ans << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}