#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll N; cin >> N;
    vector<ll> songs(N);
    for(ll& x : songs) cin >> x;

    ll start = 0, ans = 0;
    map<ll, ll> mp;

    for (ll end = 0; end < N; end++) {
        if (mp.find(songs[end]) != mp.end() && mp[songs[end]] >= start) {
            start = mp[songs[end]] + 1;
        }
        mp[songs[end]] = end;
        ans = max(ans, end - start + 1);
    }

    cout << ans << '\n';
    return 0;
}
