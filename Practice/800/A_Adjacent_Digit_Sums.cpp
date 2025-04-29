#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int x, y;
    cin >> x >> y;

    if(y > x + 1) cout << "No" << endl;
    else if(y % 9 == (1 + x % 9) % 9) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}