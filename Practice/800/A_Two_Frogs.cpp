#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // Ensure `a` and `b` are within `[1, n]` before making a decision
        if (a > n || b > n || a < 1 || b < 1) {
            cout << "NO" << endl; // Invalid input case (just in case)
        } else if (abs(a - b) == 1) {
            cout << "NO" << endl; // `a` and `b` are consecutive
        } else {
            cout << "YES" << endl; // Otherwise, it's valid
        }
    }
    return 0;
}
