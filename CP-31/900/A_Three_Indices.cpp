#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll ind = -1;
    for(ll j = 1; j < n -1; j++) {
        if(v[j -1] < v[j] && v[j +1] < v[j]) {
            ind = j;
            break;
        }
    }
    if(ind != -1) {
        cout << "YES" << endl;
        cout << ind << " " << ind +1 << " " << ind +2 << endl;
    }
    else cout << "NO" << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}