#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define vpii vector<pair<int, int>>
#define all(v) (v).begin(), (v).end()
#define fr first
#define sc second
#define inp(v) for(auto& x : v) cin >> x
#define rep(i, a, b) for(int i = a; i < b; i++)

void rain() {
    int n; cin >> n;
    vi v(n);
    inp(v);

    vi pre(n);
    pre[0] = v[0];
    int i = 0;
    rep(i, 1, n) {
        pre[i] = max(pre[i -1], v[i]);
    }

    int sum = 0;
    for(i = n -1; i >= 0; i--) {
        cout << sum + pre[i] << " ";
        sum += v[i];
    }
    cout << endl;
}

int32_t main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}