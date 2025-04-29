#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) mp[v[i]]++;

    ll curr_high_freq = 0;
    for(auto it : mp) curr_high_freq = max(curr_high_freq, it.second);

    ll opr = 0;
    while(curr_high_freq < n) {
        opr++;
        if(curr_high_freq * 2 <= n) {
            opr += curr_high_freq;
            curr_high_freq *= 2;
        }
        else {
            opr += (n - curr_high_freq);
            curr_high_freq = n;
        }
    }
    cout << opr << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}