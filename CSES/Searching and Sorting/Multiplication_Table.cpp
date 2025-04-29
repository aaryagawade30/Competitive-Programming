#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

bool possible(ll mid, ll n) {
    ll cnt = 0;
    for(ll row = 1; row <= n; row++) {
        cnt += min(n, mid / row);
    }
    return cnt >= (n * n +1) /2;
}

void solve() {
    ll n; cin >> n;

    ll low = 1, high = n * n;
    ll ans;
    while(low <= high) {
        ll mid = low + (high - low) /2;
        if(possible(mid, n)) {
            ans = mid;
            high = mid -1;
        }
        else low = mid +1;
    }
    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}