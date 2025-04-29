#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    ll cnt2 = 0, cnt3 = 0;

    while(n > 0 && n % 3 == 0) {
        cnt3++;
        n /= 3;
    }
    while(n > 0 && n % 2 == 0) {
        cnt2++;
        n /= 2;
    }

    if(n > 1 || cnt2 > cnt3) cout << -1 << endl;
    else cout << (cnt3 - cnt2) + cnt3 << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}