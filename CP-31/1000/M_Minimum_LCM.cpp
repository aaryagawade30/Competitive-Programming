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
    int ans_a = 1, ans_b = n -1;

    for(int fac = 2; fac * fac <= n; fac++) {
        if(n % fac == 0) {
            ans_a = n / fac;
            ans_b = n - ans_a;
            break;
        }
    }
    cout << ans_a << " " << ans_b << endl;
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