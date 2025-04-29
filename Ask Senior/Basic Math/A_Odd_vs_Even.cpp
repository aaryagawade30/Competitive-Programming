#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    ll n; cin >> n;
    if(n % 4 == 0) cout << "Even" << endl;
    else if(n % 2 == 0 && n % 4 != 0) cout << "Same" << endl;
    else cout << "Odd" << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}