#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

int min_opr(string n, string poss_val) {
    int opr = 0;
    int checker_ind = poss_val.size() -1;
    for(int i = n.size() -1; i >= 0; i--) {
        if(n[i] == poss_val[checker_ind]) {
            checker_ind--;
            if(checker_ind < 0) break;
        }
        else {
            opr++;
        }
    }

    if(checker_ind >= 0) {
        opr = INT_MAX;
    }
    return opr;
}

void solve() {
    string n;
    cin >> n;

    vector<string> poss_vals = {"00", "25", "50", "75"};
    int ans = INT_MAX;
    for(auto poss_val : poss_vals) {
        ans = min(ans, min_opr(n, poss_val));
    }
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