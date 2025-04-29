#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    if (k == 0) {
        cout << 0 << endl;
        return;
    }

    if (p == 0) {
        cout << -1 << endl; 
        return;
    }

    int steps = (abs(k) + p - 1) / p; 

    if (steps > n) {
        cout << -1 << endl; 
    } else {
        cout << steps << endl;
    }
}

int main() {
    int T; 
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
