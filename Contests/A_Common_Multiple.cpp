#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    set<ll> st;
    for(ll num : v) st.insert(num);

    cout << st.size() << endl;
    
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}