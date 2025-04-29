#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll c1 = 0, c0 = 0;
    for(ll i = 0; i < n; i++) {
        if(v[i] == 1) c1++;
        else if(v[i] == 0) c0++;
    }

    cout << c1 * (1ll << c0) << endl;  
    // cout << c1 * pow(2, c0) << endl; here giving wrong ans instead use bit manipulation
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}