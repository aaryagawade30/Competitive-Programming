#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int dashes = count(s.begin(), s.end(), '-');
    int undersc = count(s.begin(), s.end(), '_');

    cout << (dashes / 2) * ((dashes + 1) /2) * undersc << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
