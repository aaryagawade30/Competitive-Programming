#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n, k; cin >> n >> k;
    vl v(n * k);
    for(ll i = 0; i < n * k; i++) cin >> v[i];

    ll ptr = n * k;
    ll sum = 0;
    while(k--) {
        ptr -= ((n / 2 )+ 1);
        sum += v[ptr];
    }
    cout << sum << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}