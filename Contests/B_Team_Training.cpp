#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n, x; cin >> n >> x;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    sort(v.rbegin(), v.rend());

    ll cnt = 0, size = 0;
    for(ll i = 0; i < n; i++) {
        size++;
        if(v[i] * size >= x) {
            cnt++;
            size = 0;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}