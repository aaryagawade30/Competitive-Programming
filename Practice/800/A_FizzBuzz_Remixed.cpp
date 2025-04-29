#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    int cnt = 3 * (n / 15);
    n %= 15;
    for(int i = 0; i <= n; i++) {
        if(i % 3 == i % 5) cnt++;
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