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
    int n, k; cin >> n >> k;
    vi a(n), b(n);
    inp(a);
    inp(b);

    if(count(all(b), -1) != n) {
        int x;
        rep(i, 0, n) {
            if(b[i] != -1) {
                x = a[i] + b[i];
                break;
            }
        }

        rep(i, 0, n) {
            if(b[i] != -1) {
                if(b[i] + a[i] != x) {
                    cout << 0 << endl;
                    return;
                }
            }
            else {
                if(0 > x - a[i] || k < x - a[i]) {
                    cout << 0 << endl;
                    return;
                }
            }
        }
        cout << 1 << endl;
    }
    else {
        int l = 0, r = LLONG_MAX;
        rep(i, 0, n) {
            l = max(l, a[i]);
            r = min(r, a[i] + k);
        }
        cout << max(0LL, r - l +1) << endl;
    }

}
int32_t main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}