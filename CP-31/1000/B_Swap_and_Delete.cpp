#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    string s; cin >> s;
    ll n = s.size();

    ll cnt1 = count(s.begin(), s.end(), '1');
    ll cnt0 = count(s.begin(), s.end(), '0');
    ll ts = 0;

    for(ll i = 0; i < n; i++) {
        if(s[i] == '1' && cnt0 > 0) {
            cnt0--, ts++;
        }
        else if(s[i] == '0' && cnt1 > 0) {
            cnt1--, ts++;
        }
        else break;
    }
    cout << n - ts << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}