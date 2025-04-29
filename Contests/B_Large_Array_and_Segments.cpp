#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    vl a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll s = accumulate(a.begin(), a.end(), 0LL);

    if(x > k * s) {
        cout << 0 << endl;
        return;
    }

    ll xm = x % s;
    ll q = x / s;
    if(xm == 0) {
        q--;
        xm = s;
    }

    ll ans = n * k - q * n;
    ll suff = 0;
    for(ll i = n -1; i  >= 0; i--) {
        suff += a[i];
        if(suff >= xm) {
            break;
        }
        ans--;
    }

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