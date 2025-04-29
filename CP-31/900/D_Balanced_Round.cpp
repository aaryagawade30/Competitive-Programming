#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vl arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll ans = 1, group_size = 1;

    for (ll i = 1; i < n; i++) {
        if ((arr[i] - arr[i - 1]) > k) {
            ans = max(ans, group_size);
            group_size = 1; // Start a new group
        } else {
            group_size++; // Extend current group
        }
    }

    ans = max(ans, group_size); // Update for the last group
    cout << n - ans << endl; // Minimum removals to get the largest group
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
