#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    // Sort based on values, keeping original indices
    sort(arr.begin(), arr.end());

    // Distribute k/n to all
    vector<ll> ans(n, k / n);
    ll rem = k % n; // Fix: Correct remainder calculation

    // Distribute the remaining k%n to the smallest values
    for (ll i = 0; i < rem; i++) {
        ans[arr[i].second]++;
    }

    // Print results
    for (auto &it : ans) cout << it << endl;

    return 0;
}
