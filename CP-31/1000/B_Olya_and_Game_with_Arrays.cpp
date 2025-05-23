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
    vi sec_ele;
    int lowest_fr_mini = LONG_LONG_MAX;
    for(int i = 0; i < n; i++) {
        int m; cin >> m;
        vi a(m);
        for(int& it : a) cin >> it;
        sort(all(a));

        sec_ele.push_back(a[1]);
        lowest_fr_mini = min(lowest_fr_mini, a[0]);
    }

    sort(all(sec_ele));

    int sum_of_sec_ele = accumulate(all(sec_ele), 0LL);
    int lowest_sc_mini = sec_ele[0];

    int ans = lowest_fr_mini + sum_of_sec_ele - lowest_sc_mini;

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