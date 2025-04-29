#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(ll i = 0;i < n; i++) cin >> v[i];

    ll cnt = 0;
    for(ll i = n -2; i >= 0; i--) {
        while(v[i] >= v[i +1] &&  v[i] > 0) {
            v[i] /= 2;
            cnt++;
        }

        if(v[i] == v[i +1]) {
            cout << -1<< endl;
            return;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}