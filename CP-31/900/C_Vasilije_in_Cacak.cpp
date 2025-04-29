#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    
    ll mini = 0, maxi = 0;
    for(ll i = 1; i <= k; i++) {
        mini += i;
        maxi += (n - i +1);
    }

    cout << ((x >= mini && x <= maxi) ? "YES" : "NO") << endl;
}

int main() {
    int T; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
