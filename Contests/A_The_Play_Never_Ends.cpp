#include <iostream>
using namespace std;

void solve() {
    int k;
    cin >> k;
    cout << ((k % 3 == 1) ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
