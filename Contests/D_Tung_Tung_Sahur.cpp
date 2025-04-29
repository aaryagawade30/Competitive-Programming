#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    string p, s;
    cin >> p >> s;
    ll i = 0, j = 0, n = p.size(), m = s.size();

    while(i < n && j < m) {
        char ch = p[i];
        ll cnt1 = 0;
        while(i < n && p[i] == ch) {
            cnt1++;
            i++;
        }

        ll cnt2 = 0;
        while(j < m && s[j] == ch) {
            cnt2++;
            j++;
        }
        // 1. if the char don't match eg. L -> R
        // 2. if same char exceeds the size it must occupy eg. L -> LLL
        if(cnt2 < cnt1 || cnt2 > 2 * cnt1) {
            cout << "NO" << endl;
            return;
        }
    }
    if(i == n && j == m) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}



