#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n -1; i++) {
        if(s[i] != s[i +1]) cnt++;
    }
    if(s[0] == '1') cnt++;
    cout << cnt << endl;

}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}