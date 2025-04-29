#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 1, cur = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i -1]) cur = 1;
        else cur++;
        ans = max(ans, cur);
    }
    cout << ans +1<< endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}