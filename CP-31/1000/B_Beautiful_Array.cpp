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
    int n, k, b, s;
    cin >> n >> k >> b >> s;

    int min_s = (k * b);
    int max_s = (k * b) + n * (k -1);

    if(s < min_s || s > max_s) {
        cout << -1 << endl;
    }
    else {
        vi ans(n, 0);
        ans[0] = min_s;
        s -= min_s;
        for(int i = 0; i < n; i++) {
            int add = min(k -1, s);
            ans[i] += add;
            s -= add;
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
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