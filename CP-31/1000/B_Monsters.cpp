#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define all(v) (v).begin(), (v).end()
#define fr first
#define sc second
#define inp(v) for(auto& x : v) cin >> x
#define rep(i, a, b) for(int i = a; i < b; i++)

void rain() {
    int n, k;
    cin >> n >> k;
    vpii v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].fr;
        v[i].sc = i + 1;
    }

    int i;
    rep(i, 0, n) {
        v[i].fr = v[i].fr % k;
        if(v[i].fr == 0) v[i].fr = k;
    }

    sort(all(v), [&](pii a, pii b) {
        if(a.fr != b.fr) {
            return a.fr > b.fr;
        }
        return a.sc < b.sc;
    });

    for(auto& it : v) {
        cout << it.sc << " ";
    }
    cout << endl;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}