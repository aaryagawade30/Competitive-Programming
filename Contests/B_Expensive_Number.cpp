#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    string s; cin >> s;

    int n = s.size();
    bool met_pos = false;
    int cnt0 = 0;
    for(int i = n -1; i >= 0; i--) {
        if(s[i] != '0') {
            met_pos = true;
        }
        else if(met_pos) cnt0++;
    }
    cout << n - (cnt0 + 1) << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}