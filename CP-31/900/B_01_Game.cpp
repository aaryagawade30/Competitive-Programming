#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    string s; cin >> s;

    ll cnt0 = 0, cnt1 = 0;
    for(ll i = 0; i < s.size(); i++) {
      if(s[i] == '0') cnt0++;
      else cnt1++;
    }
    
    cout << (min(cnt0, cnt1) % 2 ? "DA" : "NET") << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}