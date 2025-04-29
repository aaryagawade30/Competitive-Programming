#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

bool possible(ll time, ll t, vl &v) {
    ll tot = 0;
    for(ll vi : v) {
        tot += time / vi;
        if(tot >= t) return true;
    }
    return false;
}

void solve() {
    ll n, t; cin >> n >> t;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
   
    ll low = 1, high = *min_element(v.begin(), v.end()) * t;
    ll ans = high;
    while(low <= high) {
        ll mid = (low + high) /2;
        if(possible(mid, t, v)) {
            ans = mid;
            high =  mid -1;
        }else {
            low = mid +1;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}