#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    if(s[0] != s[n -1]) {
        if(s[n -1] == 'a') s[n -1] = 'b';
        else s[n -1] = 'a';
    }
    cout << s << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}