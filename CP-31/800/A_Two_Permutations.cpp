#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if(a + b + 2 <= n || (a == b && a == n)) cout << "Yes" << endl;
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