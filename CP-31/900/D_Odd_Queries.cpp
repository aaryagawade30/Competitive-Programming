#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n, q;
    cin >> n >> q;
    vl arr(n + 1);
    vl prefsum(n +1);
    
    ll totalSum = 0;
    for(ll i = 1; i <= n; i++) {
        cin >> arr[i];
        totalSum += arr[i]; // Compute initial sum
        prefsum[i] = arr[i] + prefsum[i -1];
    }

    while(q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        // Compute the sum of the range [l, r]
        ll rangeSum = prefsum[r] - prefsum[l -1];

        // Compute new total sum after replacing range with k
        ll newTotalSum = totalSum - rangeSum + (r - l + 1) * k;

        // Output result based on the parity of new sum
        cout << (newTotalSum % 2 == 1 ? "YES" : "NO") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; 
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
