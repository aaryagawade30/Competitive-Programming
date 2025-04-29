#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    for (int y = x - 1; y > 0; y--) {  // Start from x-1, checking decreasing
        int z = x ^ y;
        if (x + y > z && x + z > y && y + z > x) {
            cout << y << endl;
            return;
        }
    }
    
    cout << -1 << endl;  // No valid `y` found
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
