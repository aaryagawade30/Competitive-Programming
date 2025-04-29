#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    if(n < 3) {
        cout << "NO" << endl;
        return;
    }
    vi a(n), b(n);
    set<int> sa, sb;
    for(int i = 0; i < n; i++) cin >> a[i], sa.insert(a[i]);
    for(int i = 0; i < n; i++) cin >> b[i], sb.insert(b[i]);

    string ans = (sa.size() + sb.size() > 3) ? "YES" : "NO";
    cout << ans << endl;
    
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}