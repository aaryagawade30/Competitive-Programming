#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vector<vector<ll>> v(n, vector<ll>(n));
    
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    ll m = 2 * n;
    vl ans(m);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            ans[i + j + 1] = v[i][j];
        }
    }
    ll sum = accumulate(ans.begin(), ans.end(), 1);
    //cout << "sum " << sum << endl;
    ans[0] = ((m * (m +1)) / 2) - sum + 1;
    for(ll i = 0; i < m; i++) cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}