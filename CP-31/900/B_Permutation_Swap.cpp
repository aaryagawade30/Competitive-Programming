#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; 
    cin >> n;
    vl arr(n +1);

    for (ll i = 1; i <= n; i++) cin >> arr[i];

    ll k = 0;
    for(ll i = 1; i <= n; i++) {
        k = __gcd(k, abs(arr[i] - i));
    }
    cout << k << endl;
}

int main() {
    int T; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
