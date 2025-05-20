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
    char c; cin >> c;
    string s; cin >> s;
    s = s + s;
    int last = 0, ans = 0;;
    for(int i = s.size() -1; i >= 0; i--) {
        if(s[i] == 'g') {
            last = i;
        }
        if(s[i] == c) ans = max(ans, last - i);
    }
    
    cout << ans << endl;
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