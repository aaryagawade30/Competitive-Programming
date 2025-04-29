#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int cnt = 0;
    for(int i = 0; i < n -1; i++) {
        if(v[i] % 2 == v[i +1] % 2) cnt++;
    }
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