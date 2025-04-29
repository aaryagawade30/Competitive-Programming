#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n, x; cin >> n >> x;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll mini = 0, maxi = 0;
    for(ll i = 0; i < n; i++) {
        maxi += ceil(v[i] * 1.0 / x);
        mini += v[i];
    }   
    mini = ceil(mini * 1.0 / x);
    cout << mini << " " << maxi << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}