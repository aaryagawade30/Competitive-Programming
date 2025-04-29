#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    if(n & (n -1)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}