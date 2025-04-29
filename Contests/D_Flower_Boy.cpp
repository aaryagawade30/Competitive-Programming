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
#define INF 1000000000000000000LL

void rain() {
    int n, m; cin >> n >> m;
    vi a(n), b(m);
    inp(a); inp(b);

    vi p(m, -INF), s(m, INF);
    int i = 0;
    {
    int p1 = 0;
    rep(i, 0, n) {
        if(p1 >= m) break;
        if(a[i] >= b[p1]) {
            p[p1] = i;
            p1++;
        }
    }
}
    {
    int p2 = m -1;
    for(int i = n -1; i >= 0; i--) {
        if(p2 < 0) break;
        if(a[i] >= b[p2]) {
            s[p2] = i;
            p2--;
        }
    }
}
    if(p[m -1] != INF) {
        cout << 0 << endl;
        return;
    }  
    
    int ans = LLONG_MAX;
    rep(i, 1, m -1) {
        if(s[i +1] > p[i -1]) {
            ans = min(ans, b[i]);
        }
    }

    if(s[1] != -INF) {
        ans = min(ans, b[0]);
    }

    if(p[m -2] != -INF) {
        ans = min(ans, b[m -1]);
    }

    if(ans == LLONG_MAX) {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int32_t main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}