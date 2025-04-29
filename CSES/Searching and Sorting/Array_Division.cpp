#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

bool possible(ll x, ll k, vl &workloads) {
    ll usedWorkers = 1;
    ll currWorkload = 0;

    for(auto work : workloads) {
        if(currWorkload + work <= x) {
            currWorkload += work;
        }else {
            if(usedWorkers == k) {
                return false;
            }
            usedWorkers++;
            if(work > x) return false;
            currWorkload = work;
        }
    }
    return true;
}

void solve() {
    ll n, k; cin >> n >> k;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll low = 0, high = accumulate(v.begin(), v.end(), 0LL);
    ll ans = high;
    while(low <= high) {
        ll mid = (low + high) /2;
        if(possible(mid, k, v)) {
            ans = min(mid, ans);
            high = mid -1;
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