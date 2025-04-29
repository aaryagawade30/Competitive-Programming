#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n;
    cin >> n;
    vl v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    ll cnt0 = 0;
    for (ll i = 0; i < n; i++) {
        if(v[i] == 0) cnt0++;
    }
    if(cnt0 == n) {
        cout << 0 << endl;
        return;
    }

    if (cnt0 == n) {
        cout << 0 << endl;
        return;
    }

    ll l = 0, r = n - 1;
    while (l < n && v[l] == 0) l++;
    while (r >= 0 && v[r] == 0) r--;

    bool found0 = false;
    for (ll i = l; i <= r; i++) {
        if (v[i] == 0) {
            found0 = true;
            break;
        }
    }

    cout << (found0 ? 2 : 1) << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
