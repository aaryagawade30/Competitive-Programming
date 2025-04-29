#include <iostream>

using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;

    if (n < 4 || n % 2 == 1) {
        cout << -1 << endl;
        return;
    }

    ll mini = (n + 5) / 6; // Equivalent to ceil(n / 6.0) without floating-point precision issues
    ll maxi = n / 4;       // Integer division, no need for floating-point conversion

    cout << mini << " " << maxi << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
