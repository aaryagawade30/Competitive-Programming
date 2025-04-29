#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}