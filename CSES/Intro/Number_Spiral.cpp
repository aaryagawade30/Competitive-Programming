#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long y, x;
    cin >> y >> x;

    long long maxN = max(x, y);  // Determine the outermost layer
    long long maxVal = maxN * maxN;  // Largest number in that layer
    long long minVal = (maxN - 1) * (maxN - 1) + 1;  // Smallest number in that layer

    if (maxN % 2 == 0) {
        // Even layers move right → up
        if (y == maxN) {
            cout << maxVal - (x - 1) << endl;  // Bottom row, moving left
        } else {
            cout << minVal + (y - 1) << endl;  // Right column, moving up
        }
    } else {
        // Odd layers move down → left
        if (x == maxN) {
            cout << maxVal - (y - 1) << endl;  // Right column, moving up
        } else {
            cout << minVal + (x - 1) << endl;  // Bottom row, moving left
        }
    }
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
