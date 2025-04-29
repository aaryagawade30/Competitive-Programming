#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll result = v[0];
    for(ll i = 1; i < n; ++i) {
        result &= v[i];
    }

    cout << result << '\n';
}

int main() {
    int T; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
