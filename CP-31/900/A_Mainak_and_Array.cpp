#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl arr(n);
    ll ans = 0;
    for(ll i = 0; i < n; i++) cin >> arr[i];

    for(ll i = 1; i < n; i++) ans = max (ans, arr[i] - arr[0]);
    for(ll i = 0; i < n -1; i++) ans = max (ans, arr[n -1] - arr[i]);
    for(ll i = 0; i < n -1; i++) ans = max (ans, arr[i] - arr[i +1]);

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