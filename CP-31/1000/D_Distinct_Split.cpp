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
    string s; cin >> s;
    vector<int> pref(n), suf(n);
    unordered_set<char> st;

    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
        pref[i] = st.size();
        
    }

    st.clear();
    for(int i = n -1; i >= 0; i--) {
        st.insert(s[i]);
        suf[i] = st.size();
    }

    int ans = 0;
    for(int i = 0; i < n -1; i++) {
        ans = max(ans, suf[i +1] + pref[i]);
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