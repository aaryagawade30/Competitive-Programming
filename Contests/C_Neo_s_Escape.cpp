#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define inp(v) for(auto& x : v) cin >> x

void rain() {
    int n; cin >> n;
    vi a(n); inp(a);
    
    // Step 1: Remove consecutive duplicates
    vi b;
    b.push_back(a[0]);
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            b.push_back(a[i]);
        }
    }
    
    // Step 2: Count peaks
    int clones = 0;
    int m = b.size();
    for (int i = 0; i < m; ++i) {
        bool is_peak = false;
        if (i == 0) {
            is_peak = (m == 1 || b[i] > b[i + 1]); // only one or descending start
        } else if (i == m - 1) {
            is_peak = (b[i] > b[i - 1]); // descending end
        } else {
            is_peak = (b[i] > b[i - 1] && b[i] > b[i + 1]); // middle peak
        }
        if (is_peak) clones++;
    }
    
    cout << clones << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while (T--) rain();
    return 0;
}
