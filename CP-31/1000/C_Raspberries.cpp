#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>


void solve() {
    ll n, k; cin >> n >> k;
    vl v(n);
    for(ll& num : v) cin >> num;

    ll ans = LONG_LONG_MAX, even_cnt = 0;
    for(ll& it : v) {
        if(it % 2 == 0) even_cnt++;
        if(it % k == 0) ans = 0;
        ans = min(ans, (k - (it % k))); 
    }

    if(k == 4) {
        if(even_cnt >= 2) ans = min(ans, 0LL);
        else if(even_cnt == 1) ans = min(ans, 1LL);
        else if(even_cnt == 0) ans = min(ans, 2LL);
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