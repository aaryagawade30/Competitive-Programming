#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    ll n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    ll maxi = v[n -1], mini = v[0];

    if(maxi == mini) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        cout << maxi << " ";
        for(int i = 0; i < n -1; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
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