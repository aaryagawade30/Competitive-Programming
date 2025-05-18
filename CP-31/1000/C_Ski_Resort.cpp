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
    int n, k, q;
    cin >> n >> k >> q;

    vi v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] = (v[i] > q) ? 0 : 1;
    }

    int cnt1 = 0, ways = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == 1) cnt1++;
        else {
            if(cnt1 >= k) {
                int diff = cnt1 - k +1;
                ways += (diff * (diff + 1)) /2;
            }
            cnt1 = 0;
        }
    }

    if(cnt1 >= k) {
        int diff = cnt1 - k +1;
        ways += (diff * (diff + 1)) /2;
    }

    cout << ways << endl;
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