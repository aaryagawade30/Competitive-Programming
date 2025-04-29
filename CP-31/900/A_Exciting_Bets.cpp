#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll a, b; cin >> a >> b;
    ll temp;
    if(a < b) swap(a, b);
    if(a == b) cout << 0 << " " << 0 << endl;
    else {
        ll g = abs(a - b);
        ll opr = min(b % g, g - (b % g));
        cout << g << " " << opr << endl;
    }
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}